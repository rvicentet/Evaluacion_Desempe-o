#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=5*n;j++){
			if(j==1||j==5*n||i==1||i==n){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<""<<endl;
	}
	return 0;
}