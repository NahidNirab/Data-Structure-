#include <iostream>
using namespace std;
int main ()
{
    int size, temp,j,i;
L:  cout << "Enter Size: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Wrong Input"<< endl;
        goto L;
    }
    char arr[size];
    for ( i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    cout << "Given Value : "<< endl;
    for ( i=0; i<size; i++)
    {
        cout << arr[i]<< "\t";
    }
    for (i=0; i<size; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if (arr [i]> arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    cout << endl << "Sorted value: " << endl ;
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << "\t" ;
    }
    return 0;
}
