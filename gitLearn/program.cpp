#include <iostream>
using namespace std;
int sum1=0;
int product = 1;
int sub=0;
int xor=1;
void XOR(int a,int b)
{
	xor=a^b;
}
void subtract(int a,int b)
{
	sub = a-b;
int power = 1;
 // This is power function 
// power of a and b is a**b

void powerFunction(int a, int b){
	power = a**b;
}

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
