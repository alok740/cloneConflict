#include <iostream>
using namespace std;
int sum1=0;
int product = 1;

void multiply(int a, int b){
	product = a*b;
}


int div=0;

void sum(int a,int b)
{
    sum1=a+b;
}
void division(int a,int b)
{
	div=a/b;
}
int main() {
	sum(2,4);
	cout<<sum1<<" ";
	cout<<div<<" ";
	//commented
	return 0;
}
