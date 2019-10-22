#include <iostream> 

using namespace std; 

int main()
{ 
   char z[100]; 
   bool IsBreak = false; 
   cout<< "¬ведите число" << endl; 
   cin >> z; 
   for (int i = 0; z[i]! = '\0'; i++) 
   if (z[i]<48 || z[i]>57) 
   { 
      cout << "¬ведено не число\n"; 
      IsBreak=true; 
      break; 
   } 
   cout << endl; 
   return 0; 
}