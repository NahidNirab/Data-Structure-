#include <iostream>
using namespace std;
int main ()
{
    int pos, size, num;
    bool flag;
    cout << "Enter array Size: ";
    cin >> size;
    int arr[size];
    //input
    for (int i=0; i<size; i++)
    {
        cin >> arr [i];
    }
    cout << "Enter the number to be search : ";
	cin >> num;
    for  (int i=0; i< size; i++)

        if ( arr[i]==num)
    {
        flag=true;
        pos=i;
        break;
    }
    if(flag){
		cout << num << " found at index "<<pos;
	}
	else{
		cout << num << " Not Found ";
	}
    return 0;
}
