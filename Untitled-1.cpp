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