class SA
{
    private:
        int nprocess;
        int n_burst_time[n_process];
    public:
        void waiting_time()
        {
            
        }
        void average_waiting_time()
        {

        }

}
int main()
{
    SA s;
    cout<<"Enter number of process: ";
    cin>>s.n_process;
    cout<<"Enter burst times: ";
    for(int i=0;i<s.n_process;i++)
        cin>>s.n_burst_time[i];
    return 0;
}