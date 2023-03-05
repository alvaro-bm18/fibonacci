#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int index){
   vector<int> fibo;
   fibo.push_back(0);
   fibo.push_back(1);

   for(int i = 1; i <= index; i++){
      fibo.push_back(fibo[i-1] + fibo[i]);
   }

   return fibo[index+1];
}

int main(){
   cout << fibonacci(0);
   return 0;
}
