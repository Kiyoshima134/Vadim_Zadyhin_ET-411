#include <iostream> 

using namespace std; 

int main()
{ 
   char z[100]; 
   bool IsBreak = false; 
   cout<< "������� �����" << endl; 
   cin >> z; 
   for (int i = 0; z[i]! = '\0'; i++) 
   if (z[i]<48 || z[i]>57) 
   { 
      cout << "������� �� �����\n"; 
      IsBreak=true; 
      break; 
   } 
   cout << endl; 
   return 0; 
}