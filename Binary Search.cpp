#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    bool flag=true;
	int arr_size, search, first, last, middle;
	int arr[5]={10,20,30,40,50};
    arr_size=sizeof(arr)/sizeof(arr[0]);
	cout << "Enter a number to find :";
	cin >> search;
	first = 0;
	last = arr_size-1;
	middle = floor((first+last)/2);
	while (flag)
	{
    	if(first > last)
        {
            cout << "Not found! " << search << " is not present in the list.";
            flag=false;
        }
        else{
            if(arr[middle] == search)
            {
                cout << search << " found at location " << middle << "\n";
                flag=false;
            }
            else if(search > arr[middle])
            {
                first = middle + 1;
            }
            else
            {
                last = middle - 1;
            }
            middle = floor((first+last)/2);
        }
	}

	return 0;
}
