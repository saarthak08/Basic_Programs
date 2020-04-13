#include <iostream>

using namespace std;

class base
{
   public:
      virtual int func()
      {
         cout << "vfunc in base class\n";
         return 0;
      }
};

class derived: public base
{
   public:
      double func()
      {
         cout << "vfunc in derived class\n";
         return 0;
      }
};

int main()
{
    base bptr;
   bptr.func();

   return 0;
}
