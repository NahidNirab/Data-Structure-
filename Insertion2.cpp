#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "input array size = " ;
    cin >> size ;
    int  a[size];
    for (int i=0; i<size; i++)
        {
             cin >> a[i];
        }
    for (int i=0; i<size; i++)
    {
        int tem=a[i];
        int j=i;
        {
            while (j>0&&tem<a[j-1])
            {
                a[j]=a[j-1];
                j=j-1;
            }
            a[j]=tem;
        }
    }
    for (int i=0;i<size;i++)

        {
            cout << a[i];

        }
}
