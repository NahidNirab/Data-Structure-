#include<iostream>
using namespace std;
int main() {
   int i, arr[50], sum, num;
   cout << "Enter no of elements :";
   cin >>num;
   //Reading values into Array
   cout << "\nEnter the values: "<< endl;
   for (i = 0; i < num; i++)
      cin >> arr[i];
   //Computation of total
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
   //Printing of all elements of array
   for (i = 0; i < num; i++)
      cout <<  arr[i]<< "   ";
   //Printing of total
   cout <<endl<< "sum = " << sum;
   return (0);
}
