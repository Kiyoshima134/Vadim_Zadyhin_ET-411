#include <iostream> 

using namespace std; 

int main()
{ 
   char z[100]; 
   bool IsBreak = false; 
   cout<< "Введите число" << endl; 
   cin >> z; 
   for (int i = 0; z[i]! = '\0'; i++) 
   if (z[i]<48 || z[i]>57) 
   { 
      cout << "Введено не число\n"; 
      IsBreak=true; 
      break; 
   }
   int c = atoi(z); 
   cout << c + 7 << endl; 
   return 0; 
}