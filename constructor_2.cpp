#include <iostream>
using namespace std;
class Line {
   public:
      void setLength( double len ){
          length = len;
      }
      double getLength(){
          return length;
      }
      // This is the constructor
      Line(double len){
          cout << "Object is being created, length = " << len << endl;
          length = len;
      }
      // This is the destructor
      ~Line(){
          cout << "Destructor called ";
      }
   private:
      double length;
};
// Main function for the program
int main() {
   Line line(10.0);
   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;
   // set line length again
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}
