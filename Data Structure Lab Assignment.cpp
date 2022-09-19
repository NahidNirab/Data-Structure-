/*
Data Structure Lab Assignment
MD NAHIDUL HOQUE NIRAB
2018100000023
Section 3
*/
#include <iostream>
using namespace std;
int main ()
{
    int size, temp,j,i,bs;
    cout << "Enter Array Size: " ;
    cin >> size;
    char arr[size];
    if (size%3!=0)
    {
        cout << "Wrong Input. The Size must be divisible by 3" << endl;
    }
    else {
    //input
      for ( i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    for ( i=0; i<size; i++)
    {
        cout << arr[i]<< " ";
    }
    int p =size /3;
    // Bubble short
    cout <<  "Bubble Short: ";
    cout << "1.Ascending ";
    cout << "2.Descending ";
    cin >> bs ;
    if ( bs == 1)
    {
        for (i=0; i<p; i++)
    {
        for (j=i+1; j<p; j++)
        {
            //shorting
            if (arr [i]> arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    }
 else if ( bs ==2 )
    {
       for (i=0; i<p; i++)
    {
        for (j=i+1; j<p; j++)
        {
            //shorting
            if (arr [i]< arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    }
      // Selection short
      int ss;
    cout <<  "Selection short: ";
    cout << "1.Ascending ";
    cout << "2.Descending ";
    cin >> ss ;
    if (ss==1)
    {
          for( i =p; i < 2*p-1 ; i++)  {
            int  minimum = i ;
            for(int j = i+1; j < 2*p ; j++ ) {
                if(arr[ j ] < arr[ minimum ])
                {
                    minimum = j ;
                }
             }
        int temp = arr[ i ];
        arr[ i ] = arr[minimum];
        arr[minimum] = temp;
    }
    }
    else if (ss==2)
    {
         for( i =p; i < 2*p-1 ; i++)  {
            int  maximum = i ;
            for(int j = i+1; j < 2*p ; j++ ) {
                if(arr[ j ] > arr[ maximum ])
                {
                    maximum = j ;
                }
             }
        int temp = arr[ i ];
        arr[ i ] = arr[maximum];
        arr[maximum] = temp;
    }
    }
    // Insertion sorting
    int is;
    cout <<  "Insertion short: ";
    cout << "1.Ascending ";
    cout << "2.Descending ";
    cin >> is ;
    if (is==1)
    {
         for(i=p*2;i<=p*3-1;i++)
    {
        temp=arr[i];
        for(j=i-1; temp<arr[j]&&(j>=0); j--)
        {
            arr[j+1]=arr[j];    //moves element forward

        }

        arr[j+1]=temp;    //insert element in proper place
    }

    }
    else if (is == 2)
    {
        for(i=p*2;i<=p*3-1;i++)
    {
        temp=arr[i];
        for(j=i-1; temp>arr[j]&&(j>=0); j--)
        {
            arr[j+1]=arr[j];    //moves element forward

        }

        arr[j+1]=temp;    //insert element in proper place
    }

    }

    for (int i=0; i<size; i++)
    {
        cout << endl << arr[i] << endl;
    }
    }

    return 0;
}
