#include <iostream>
using namespace std;
int main ()
{
    int size,i, end1;
    cout<<"Enter array size : ";
    cin>> size;
    int arr [size];
    for (i=0; i<size; i++)
    {cout << " ";
    cin >> arr [i];}
    for (i=0; i<size; i++)
    {cout <<arr[i]<< " ";}
    for (i=0; i<size; i++)
    {
       if (arr [i] == arr [size - i])
            {cout << "Palindrome\n";
            break; }
        else
            {cout << "Not Palindrome\n";
        break;}
        }
    return 0;
}
