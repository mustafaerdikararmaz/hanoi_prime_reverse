#include <iostream>

using namespace std;

void print_backwards(char * str) {
   char* end = str;
   char tmp;
   //We are going the characters one by one.
   if (str) {
      while(*end){
         ++end;
      }
      //We find the last character of the null terminated string.
      --end;
      //We ignored the NULL char.
       while (str-1 < end) {
          tmp = *end;
          cout<<tmp;//print the chars one by one by decrementing the pointer.
          end--;
       }
       cout<<"\n"<<endl;
    }
 }