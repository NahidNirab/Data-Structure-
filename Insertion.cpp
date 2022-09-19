#include<iostream>

using namespace std;

int main()
{
    int i,j,n,temp,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";

    for(i=p*2;i<p*3;i++)
    {
        cin>>a[i];
    }
    for(i=p*2;i<=p*3-1;i++)
    {
        temp=a[i];
        for(j=i-1; temp>a[j]&&(j>=0); j--)
        {
            a[j+1]=a[j];    //moves element forward
        }
        a[j+1]=temp;    //insert element in proper place
    }
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
