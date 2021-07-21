#include "bits/stdc++.h"
using namespace std;
int main()
{
    
    int total_no_balls,total_no_runs,total_no_runs_scored,no_of_balls_bowled;
    cin>>total_no_balls>>total_no_runs>>total_no_runs_scored>>no_of_balls_bowled;
    int t=(no_of_balls_bowled)/6;
    int p=(no_of_balls_bowled)%6;
    float overs=(total_no_balls/6);
    float of=((float)t+ (float)p/10);
    float crr=total_no_runs_scored/of;
    float trr = (total_no_runs/overs);
    cout<<"overs: "<<overs<<"\n"<<fixed<<setprecision(1)<<"overs finished: "<<of<<"\n"<<"current run rate:"<<crr<<"\n"<<"total run rate:"<<trr<<endl;
    if(crr>trr)
        cout<<"\nEligible to Win"<<endl;

    else  
         cout<<"\nNot Eligible to Win"<<endl;
    return 0;

}
 