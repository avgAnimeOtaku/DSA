#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int PACKET_SIZE = 1024;
const int WINDOW_SIZE = 1;
const int TIMEOUT = 5;

// Simulate sending a packet over a noisy channel
bool sendPacket(int packetNumber, char* packetData)
{
    // Simulate some noise in the channel
    srand(time(NULL));
    if (rand() % 10 == 0) {
        cout << "Packet " << packetNumber << " lost in transit." << endl;
        return false;
    }

    // Packet sent successfully
    cout << "Packet " << packetNumber << " sent successfully." << endl;
    return true;
}

int main()
{
    char packets[PACKET_SIZE][PACKET_SIZE] = {0}; // Array of packets to send
    int windowStart = 0; // Start of the sending window
    int windowEnd = WINDOW_SIZE - 1; // End of the sending window
    bool ackReceived = false; // Whether an ACK has been received for the last packet
    int timeoutCount = 0; // Number of times the timeout has been reached without receiving an ACK

    // Fill the packet array with data to send
    for (int i = 0; i < PACKET_SIZE; i++) {
        for (int j = 0; j < PACKET_SIZE; j++) {
            packets[i][j] = rand() % 256; // Fill with random data
        }
    }

    // Send packets one at a time until all have been sent and acknowledged
    for (int i = 0; i < PACKET_SIZE; i++) {
        // Check if the current packet is within the sending window
        if (i >= windowStart && i <= windowEnd) {
            // Send the packet and wait for an ACK
            if (sendPacket(i, packets[i])) {
                ackReceived = false;
                while (!ackReceived) {
                    // Wait for ACK
                    cout << "Waiting for ACK..." << endl;
                    srand(time(NULL));
                    if (rand() % 10 == 0) {
                        // Simulate ACK lost in transit
                        cout << "ACK lost in transit." << endl;
                    } else {
                        // Simulate receiving ACK
                        ackReceived = true;
                        cout << "ACK received." << endl;
                        // Move the sending window forward
                        windowStart++;
                        windowEnd++;
                    }
                    // Check for timeout
                    timeoutCount++;
                    if (timeoutCount >= TIMEOUT) {
                        cout << "Timeout reached." << endl;
                        // Resend all packets within the sending window
                        for (int j = windowStart; j <= windowEnd; j++) {
                            cout << "Resending packet " << j << "." << endl;
                            sendPacket(j, packets[j]);
                        }
                        // Reset timeout count
                        timeoutCount = 0;
                    }
                }
            } else {
                // Packet lost in transit, try again
                i--;
            }
        }
    }

    return 0;
}

