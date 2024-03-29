#include<iostream>
#include<vector>
#include<windows.h>  //For Sleep() function
#include<unistd.h>
using namespace std;
int main(){
int n;
vector<int> inpframe;
vector<int> waitack;
int inp;
int wainp;
int count=0;
int x;
cout<<"Enter the number of frames: "<<endl;
cin>>n;
cout<<"Enter input data into frame"<<endl;
for(int i=0;i<n;i++)
{
    cin>>inp;
    inpframe.push_back(inp);
}
cout<<"Enter wait time acknowledgement: "<<endl;
for(int i=0;i<n;i++)
{
    cin>>wainp;
    waitack.push_back(wainp);
}
//printing output:
for(int i=0;i<n;i++)
{
    if(waitack[i]<=2){
        cout<<"Frame: "<<i<<endl;
        cout<<"Data: "<<inpframe[i]<<endl;
        cout<<"Wait Time for Acknowledgement: "<<waitack[i]<<endl;
        sleep(waitack[i]);   //Sleep Function is used to add delay
        cout<<"Acknowledgement: YES"<<endl;
        cout<<"Resent: No"<<endl;
    }
    else
    {
        cout<<"Frame: "<<i<<endl;
        cout<<"Data: "<<inpframe[i]<<endl;
        cout<<"Wait Time for Acknowledgement: "<<waitack[i]<<endl;
        Sleep(waitack[i]*1000);   //Sleep Function is used to add delay
        cout<<"Acknowledgement: No"<<endl;
        cout<<"Resent: YES"<<endl;
        cout<<"Frame: "<<i<<endl;
        cout<<"Data: "<<inpframe[i]<<endl;
        waitack[i]=0;
        cout<<"Wait Time for Acknowledgement: "<<waitack[i]<<endl;
        Sleep(waitack[i]*1000);   //Sleep Function is used to add delay
        cout<<"Acknowledgement: YES"<<endl;
        cout<<"Resent: No"<<endl;
        count=count+1;
    }

}

if(count>0){
    x=n+count;
}
else{
    x=n;
}
cout<<"Total Number of Frames Transmitted : "<<x<<endl;
}
