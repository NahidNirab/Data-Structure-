// Print odd Number
#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout << " Enter array size: ";
    cin >> size;
    int arr [size];
    for (int i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    for (int i=0; i<size; i++)
        if (arr[i]%2==0)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}

/* Print even Number
#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout << " Enter array size: ";
    cin >> size;
    int arr [size];
    for (int i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    for (int i=0; i<size; i++)
        if (arr[i]%2==0)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
*/

/* Print less then 0
#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout << " Enter array size: ";
    cin >> size;
    int arr [size];
    for (int i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    for (int i=0; i<size; i++)
        if (arr[i]<0)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
*/
