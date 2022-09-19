#include <iostream>
using namespace std;
void display(char arr[], int length){
    for (int i = 0; i < (length+1)/2; i++) {
        cout << "\t" << arr[i];
    }
}
void merge_array(char arr[], int low, int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+i+1];
    }
    int i=0,j=0,k;
    k = low;
    while (i < n1 && j < n2){
        if (left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(char arr[], int low, int high){
    if(low<high){
        int mid=(high+low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge_array(arr, low, mid, high);
    }
}
char arr[]="A2B1c3D2Esf3";
int length=sizeof(arr)/sizeof(arr[0]);
void display(){
    for(int i =length/2;i<length;i++){
        cout << "\t"<<arr[i] ;
    }
    cout << endl;
}
int partition(int first, int last){
    int p=arr[last];
    int pi = first;
    for(int i=first;i<last;i++){
        if(arr[i]<=p){
            swap(arr[pi], arr[i]);
            pi++;
        }
    }
    swap(arr[last], arr[pi]);
    return pi;
}
void quickSort(int low, int high){
    if(low<high){
        int index = partition(low, high);
        quickSort(low, index-1);
        quickSort(index+1, high);
    }
}
void display_1(char arr[], int length){
    for (int i = 0; i < length; i++) {
        cout << "\t" << arr[i];
    }
}
int main()
{
    char arr[]="A2B1c3D2Esf3";
    int length=sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting merge sort :\n" << endl;
    display(arr, length);
    mergeSort(arr, 0, length-1);
    cout << "\n Array after sorting merge sort:\n" << endl;
    display(arr, length);
     cout << "\n Array before sorting quick sort :\n" << endl;

    display();

    cout << "\n Array after sorting quick sort:\n" << endl;
    quickSort(0, length-1);
    display();

    cout << "\n Array after sorting merge and quick sort  :\n" << endl;
    display_1(arr,length);
}
