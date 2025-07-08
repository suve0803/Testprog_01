#include<iostream>
#include"mylib/simp_calc.h"
using namespace std;
int main(){
cout << "Running test add01..." << endl;
if (add(2, 3) != 5)
{
	cerr << "[FAIL] add(2,3)!=5" << endl;
	return 1;
}
//else {
//	cerr << "[PASSED] add(2,3)=5" << endl;
//}
cerr << "Testing finshed" << endl;
}