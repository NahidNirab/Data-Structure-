#include <iostream>
using namespace std;
int main ()
{
    int size, temp,j,i,n;
    cout << "Enter Size: ";
    cin >> size;
    int arr[size];

      for ( i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    for ( i=0; i<size; i++)
    {
        cout << arr[i]<< " ";
    }
     for( i = 0; i < size-1 ; i++)  {
           // assuming the first element to be the minimum of the unsorted array .
            int  minimum = i ;
          // gives the effective size of the unsorted  array .
            for(int j = i+1; j < n ; j++ ) {
                if(arr[ j ] < arr[ minimum ])  {                //finds the minimum element
                    minimum = j ;
                }
             }
        // putting minimum element on its proper position.
        int temp = arr[ i ];
        arr[ i ] = arr[minimum];
        arr[minimum] = temp;
    for (int i=0; i<size; i++)
    {
        cout << endl << arr[i] << endl;
    }


}
return 0;
}
