#include <iostream>

using namespace std;

int main() {
	int z = 0;
	int x;
	cout<<"Inputkan Nilai x : ";
	cin >> x;
        for (int i = 1; i <= x; ++i) {
        if(z==0){
        	cout << z << endl;
        	z+=5;
		}
		else{
			cout << z << endl;
			z+=5;
		}
    }
    return 0;
}
