#include <iostream>

using namespace std;

class Box {

   public:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
   public:
      static int objectCount;

      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // Increase every time object is created
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
   Box b1(3.3, 1.2, 1.5);    // Declare box1
   cout << "*** BOX 1 ***\n";
   cout << "Length: " << b1.length << " - Height: "<< b1.height << " - Breadth: " << b1.breadth <<endl;
   cout << "Count: " << Box::objectCount<<endl;
   Box b2(8.5, 6.0, 2.0);    // Declare box2
   cout << "*** BOX 1 ***\n";
   cout << "Length: " << b2.length << " - Height: "<< b2.height << " - Breadth: " << b2.breadth <<endl;
   cout << "Count: " << Box::objectCount<<endl;

   // Print total number of objects.
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}
