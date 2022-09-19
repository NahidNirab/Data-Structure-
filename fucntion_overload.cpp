#include <iostream>
using namespace std;
class printData {
    public:
        printData(){
            cout << "No Parameter Constructor\n";
        }
        printData(int a){
            cout << "1 Parameter Constructor (int) : "<< a << "\n";
        }
        printData(double a){
            cout << "1 Parameter Constructor (double) : "<< a << "\n";
        }
        //Method Overloading
        void print(int i) {
            cout << "Printing int: " << i << endl;
        }
        void print(double f) {
            cout << "Printing float: " << f << endl;
        }
        void print(char c[]) {
            cout << "Printing character: " << c << endl;
        }
};
int main(void) {
    printData pd;
    printData pd1(10);
    printData pd2(10.5);
    // Call print to print integer
    pd.print(5);
    // Call print to print float
    pd.print(500.263);
    // Call print to print character
    pd.print("Hello C++");
    return 0;
}
