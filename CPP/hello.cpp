//
// Hello.cpp is a "hello world" program written in a true C++-style!
//

#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::exception;

const int MAXLEN = 80;

class outstring;

class outstring {
   public:
      outstring() { size = 0; }
      ~outstring() { size = 0; }
      void print();
      void assing( char *chrs );
   private:
      int size;
      char str[MAXLEN];
};

void outstring::print() {
   int i = 0;
   for( i = 0; i < size; i++ ) {
      cout << str[i];
   }
   cout << "\n" << endl;
}

void outstring::assing( char *chrs ) {
   int i = 0;
   for( i = 0; chrs[i] != '\0'; i++ ) {
      str[i] = chrs[i];
   }
   size = i;
}

int main( int argc, char *argv[] ) {
   outstring string;
   try {
      string.assing(( char* )"Say hello to the true C++ world!\nPS. C++ sucks. Use Java, D, or C#.");
      string.print();
   } catch( exception& e ) {
      cout << "Standard exception: " << e.what() << endl;
   }
   return 0;
}
