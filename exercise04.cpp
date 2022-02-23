#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &length, int &width);

int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

void input(int &length, int &width)
{
  cout << "Enter Box 1 Length : ";
  cin >> length;
  cout << "Enter Box 1 Width : ";
  cin >> width;
}