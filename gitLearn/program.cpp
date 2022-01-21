#include <iostream>
using namespace std;
int sum1=0;
void sum(int a,int b)
{
    sum1=a+b;
}
int main() {
	sum(2,4);
	cout<<sum1<<" ";
	//commented
	return 0;
}