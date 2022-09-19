/*
Data Structure Lab Assignment
MD NAHIDUL HOQUE NIRAB
2018100000023
Section 3
Faculty : Sadman Sakib
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int size, temp,j,i,bs;
L:  cout << "Enter Array Size: " ;
    cin >> size;
    char arr[size];
    if (size%3!=0)
    {
        cout << "Wrong Input. The Size must be divisible by 3" << endl;
        goto L;
    }
    else
        {
    /*input for size 6 [SEUCSE]
    for size 12 [A2B1c3D2Esf3]*/
       for ( i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    // Printing Inputs
    for ( i=0; i<size; i++)
    {
        cout << arr[i]<< " ";
    }
    int p =size /3;
    // Bubble sort
    cout << setw (20)<<  "\nBubble Short: \n";
    cout << setw (20)<< "1.Ascending \n";
    cout << setw (20)<< "2.Descending \n";
    cin >> bs ;
    if ( bs == 1)
    {
        for (i=0; i<p; i++)
    {
        for (j=i+1; j<p; j++)
        {
            //Ascending
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
            //Descending
            if (arr [i]< arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    }
    for (int i=0; i<p; i++)
    {
        cout << endl << setw (20)<< arr[i] << endl;
    }
      // Selection sort
      int ss;
    cout  << setw (20)<< "\nSelection short: \n";
    cout  << setw (20)<< "1.Ascending \n";
    cout  << setw (20)<< "2.Descending \n";
    cin >> ss ;
    if (ss==1)
    {
          for( i =p; i < 2*p ; i++)  {
            int  minimum = i ;
            for(int j = i+1; j < 2*p ; j++ )
            //Ascending
                {
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
         for( i =p; i < 2*p ; i++)
         //Descending
            {
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
    for (int i=p; i<2*p; i++)
    {
        cout  << setw (20)<< endl << arr[i] << endl;
    }
    // Insertion sorting
    int is;
    cout  << setw (20)<<  "\nInsertion short: \n";
    cout  << setw (20)<< "1.Ascending \n";
    cout  << setw (20)<< "2.Descending \n";
    cin >> is ;
    if (is==1)
    {
          for (int i=2*p; i<3*p; i++)
            //Ascending
    {
        int tem=arr[i];
         j=i;
        {
            while (j>2*p&&tem<arr[j-1])
            {
                arr[j]=arr[j-1];
                j=j-1;
            }
            arr[j]=tem;
        }
    }
    }
    else if (is == 2)
    {
                  for (int i=2*p; i<3*p; i++)
                    //Descending
    {
        int tem=arr[i];
        int j=i;
        {
            while (j>2*p&&tem>arr[j-1])
            {
                arr[j]=arr[j-1];
                j=j-1;
            }
            arr[j]=tem;
        }
    }
    }
    for (int i=2*p; i<3*p; i++)
    {
        cout  << setw (20)<< endl << arr[i] << endl;
    }
    cout  << setw (3)<< "\nresult :";
    // Printing Final Result
   for (int i=0;i<size;i++)
   {
       cout << setw (3)<< arr[i];
   }
   return 0;
   }
}
