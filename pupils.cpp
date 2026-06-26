#include<iostream>
using namespace std;
int main()
{
    int n,m,k,girls_room,boys_room;
    cin>>n>>m>>k;
    if((n%k==0)&&(m%k==0))
    cout<<((n/k)+(m/k))<<endl;
    else if(((n%k!=0)&&(m%k==0))||((n%k!=0)&&(m%k==0)))
        cout<<((n/k)+(m/k)+1)<<endl;
        else
            cout<<((n/k)+(m/k)+2))<<endl;


}

