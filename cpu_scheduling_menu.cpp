#include<bits/stdc++.h>
using namespace std;
class fcfs
{
    int nProcess;
    vector<float> nBurstTime;
    public:
    fcfs(int nProcess1,const vector<float> &nBurstTime1)
    {
        nProcess = nProcess1;
        for(int i = 0 ; i < nProcess ; i++)
        {
            nBurstTime.push_back(nBurstTime1[i]);
        }
    }
    void fcfs::WaitingTime()
    {
        float fSum=0;
        cout<<"Waiting Time : ";
        for(int i=0; i<nProcess; i++)
        {
            cout<<fSum<<" ";
            fSum+=nBurstTime[i];
        }
        cout<<endl;
    }
    void fcfs::AverageWaitingTime()
    {
        float fSum = 0, x = 0;
        cout<<"Average Waiting Time: ";
        for(int i=0; i<nProcess; i++)
        {
            x += fSum;
            fSum += nBurstTime[i];
        }
        cout<< (x/nProcess)<<endl;
    }
    void fcfs::TurnAroundTime()
    {
        float fSum=0;
        cout<<"Turnaround Time: ";
        for(int i=0; i<nProcess; i++)
        {
            fSum+=nBurstTime[i];
            cout<<fSum<<" ";
        }
        cout<<endl;
    }
};
class pr
{
    int nProcess;
    vector<float> nBurstTime;
    public:
    fcfs(int nProcess1,const vector<float> &nBurstTime1)
    {
        nProcess = nProcess1;
        for(int i = 0 ; i < nProcess ; i++)
        {
            nBurstTime.push_back(nBurstTime1[i]);
        }
    }
    void pr::WaitingTime()
    {
        float fSum=0;
        cout<<"Waiting Time : ";
        for(int i=0; i<nProcess; i++)
        {
            cout<<fSum<<" ";
            fSum+=nBurstTime[i];
        }
        cout<<endl;
    }
    void pr::AverageWaitingTime()
    {
        float fSum = 0, x = 0;
        cout<<"Average Waiting Time: ";
        for(int i=0; i<nProcess; i++)
        {
            x += fSum;
            fSum += nBurstTime[i];
        }
        cout<< (x/nProcess)<<endl;
    }
    void pr::TurnAroundTime()
    {
        float fSum=0;
        cout<<"Turnaround Time: ";
        for(int i=0; i<nProcess; i++)
        {
            fSum+=nBurstTime[i];
            cout<<fSum<<" ";
        }
        cout<<endl;
    }
};
class rr
{
    int nProcess;
    vector<float> nBurstTime;
    public:
    rr(int nProcess1,const vector<float> &nBurstTime1)
    {
        nProcess = nProcess1;
        for(int i = 0 ; i < nProcess ; i++)
        {
            nBurstTime.push_back(nBurstTime1[i]);
        }
    }
    void rr::WaitingTime()
    {
        float fSum=0;
        cout<<"Waiting Time : ";
        for(int i=0; i<nProcess; i++)
        {
            cout<<fSum<<" ";
            fSum+=nBurstTime[i];
        }
        cout<<endl;
    }
    void rr::AverageWaitingTime()
    {
        float fSum = 0, x = 0;
        cout<<"Average Waiting Time: ";
        for(int i=0; i<nProcess; i++)
        {
            x += fSum;
            fSum += nBurstTime[i];
        }
        cout<< (x/nProcess)<<endl;
    }
    void rr::TurnAroundTime()
    {
        float fSum=0;
        cout<<"Turnaround Time: ";
        for(int i=0; i<nProcess; i++)
        {
            fSum+=nBurstTime[i];
            cout<<fSum<<" ";
        }
        cout<<endl;
    }
};
class sjf
{
    private:
        int nProcess;
        vector<float> nBurstTime;
    public:
        sjf(int nProcess1,const vector<float> &nBurstTime1)
        {
            nProcess = nProcess1;
            for(int i = 0 ; i < nProcess ; i++ )
            {
                nBurstTime.push_back(nBurstTime1[i]);
            }
            sort(nBurstTime.begin(),nBurstTime.end());
        }
        void WaitingTime( );void sjf::WaitingTime()
        {
            float fSum=0;
            cout<<"Waiting Time : ";
            for(int i=0; i<nProcess; i++)
            {
                cout<<fSum<<" ";
                fSum+=nBurstTime[i];
            }
            cout<<endl;
        }
        void sjf::AverageWaitingTime()
        {
            float fSum = 0, x = 0;
            cout<<"Average Waiting Time: ";
            for(int i=0; i<nProcess; i++)
            {
                x += fSum;
                fSum += nBurstTime[i];
            }
            cout<< (x/nProcess)<<endl;
        }
        void sjf::TurnAroundTime()
        {
            float fSum=0;
            cout<<"Turnaround Time: ";
            for(int i=0; i<nProcess; i++)
            {
                fSum+=nBurstTime[i];
                cout<<fSum<<" ";
            }
            cout<<endl;
        }
};
int menu()
{
    cout<<"FCFS - 1"<<endl<<"SJF  - 2"<<endl<<"PS   - 3"<<endl<<"RR   - 4"<<endl<<"EXIT - 5"<<endl;
    cout<<"Enter your choice: ";
    int n;
    cin>>n;
    switch(n)
    {
        case 1: 
            cout<<"Enter the number of processes: ";
            int nProcesses;
            cin>>nProcesses;
            cout<<"Enter the Burst time of all the processes: ";
            vector<float> nBurstTime;
            for(int i=0; i<nProcesses; i++)
            {
                float temp;
                cin>>temp;
                nBurstTime.push_back(temp);
            }
            fcfs obj1(nProcesses,nBurstTime);
            obj1.WaitingTime();
            obj1.AverageWaitingTime();
            obj1.TurnAroundTime();
            break();
        case 2: 
            cout<<"Enter the number of processes: ";
            int nProcesses;
            cin>>nProcesses;
            cout<<"Enter the Burst time of all the processes: ";
            vector<float> nBurstTime;
            for(int i=0; i<nProcesses; i++)
            {
                float temp;
                cin>>temp;
                nBurstTime.push_back(temp);
            }
            sjf obj1(nProcesses,nBurstTime);
            obj1.WaitingTime();
            obj1.AverageWaitingTime();
            obj1.TurnAroundTime();
            break();
        case 3: 
            cout<<"Enter the number of processes: ";
            int nProcesses;
            cin>>nProcesses;
            cout<<"Enter the Burst time of all the processes: ";
            vector<float> nBurstTime;
            for(int i=0; i<nProcesses; i++)
            {
                float temp;
                cin>>temp;
                nBurstTime.push_back(temp);
            }
            rr obj1(nProcesses,nBurstTime);
            obj1.WaitingTime();
            obj1.AverageWaitingTime();
            obj1.TurnAroundTime();
            break();
            break();
        case 4: 
            cout<<"Enter the number of processes: ";
            int nProcesses;
            cin>>nProcesses;
            cout<<"Enter the Burst time of all the processes: ";
            vector<float> nBurstTime;
            for(int i=0; i<nProcesses; i++)
            {
                float temp;
                cin>>temp;
                nBurstTime.push_back(temp);
            }
            pr obj1(nProcesses,nBurstTime);
            obj1.WaitingTime();
            obj1.AverageWaitingTime();
            obj1.TurnAroundTime();
            break();
            break();
        case 5: 
            break();
        default: 
            cout<<"Choice not appropriate, Retry"<<endl;
            menu();
            break();
    }
}
int main()
{
    menu();
    return 0;
}