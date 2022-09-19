#include <iostream>
using namespace std;
int main()
{
    int arr_size;
    bool flag;
	int num, pos;
	cout << "Enter the array size : ";
	cin >> arr_size;
	int arr[arr_size];
	cout << "Enter Array Elements : ";
	for(int i=0; i<arr_size; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the number to be search : ";
	cin >> num;
	for(int i=0; i<arr_size; i++)
	{
		if(arr[i]==num)
		{
			flag=true;
			pos=i;
			break;
		}
	}
	if(flag){
		cout << num << " found at index "<<pos;
	}
	else{
		cout << num << " Not Found ";
	}

	return 0;
}
