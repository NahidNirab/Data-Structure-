#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter array length: ";
    cin>>n;
    cout<<"Enter the array:"<< endl;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        int d=0;
        while(a[i]!=0)
        {
            d=a[i]%10;
            s=s+d;
            a[i]=a[i]/10;
        }
        a[i]=s;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<< "  " ;
    }
}
