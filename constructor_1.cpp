#include <iostream>
using namespace std;
class Line {
   public:
       Line(){
           cout << "Object is being created" << endl;
       }
      void setLength( double len ){
          length = len;
      }
      double getLength(){
          return length;
      }

   private:
      double length;
};
// Main function for the program
int main() {
   Line line;
   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}
