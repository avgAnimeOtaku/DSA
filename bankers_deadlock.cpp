#include<bits/stdc++.h>
using namespace std;
int check_safe_state(bool safe_state[])
{
    for(int i=0;i<5;i++)
    {
        if(safe_state[i] == false)
            return 0;
    }
    return 1;
}
int main()
{
    int allocation[][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int max[][3] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int available[] = {3, 3, 2};
    bool safe_state[] = {false, false, false, false, false};
    int need[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    while(check_safe_state(safe_state) == 0)
    {
        cout<<"System is not in safe state"<<endl;
        for(int i=0;i<5;i++)
        {
            if(need[i][0] <= available[0] && need[i][1] <= available[1] && need[i][2] <= available[2] && safe_state[i] == false)
            {
				cout<<"need "<<need[i][0]<<", "<<need[i][1]<<", "<<need[i][2]<<" <= max "<<max[i][0]<<", "<<max[i][1]<<", "<<max[i][0]<<" && Safe State = false"<<endl;
				cout<<"P"<<i<<" mst be in safe state"<<endl;
                available[0] += allocation[i][0];
                available[1] += allocation[i][1];
                available[2] += allocation[i][2];
                safe_state[i] = true;
            }
			cout<<"Safe State - ";
			for(int i=0;i<5;i++)
				cout<<"P"<<i<<": "<<safe_state[i]<<"; ";
			cout<<endl;
        }    
    }
    cout<<"System is now in safe state"<<endl;
    return 0;
}