#include <iostream>

using namespace std;
int max(const int& num1, const int& num2);
int main(){

    int n1 = 68;
    int n2 = 54;
    cout << "MAXMUM NUMBER IS " << max(n1,n2)<< endl;
 return 0;   
}

int max(const int& num1, const int& num2)
{
int result;
if (num1 > num2)
result = num1;
else
result = num2;
return result;
}