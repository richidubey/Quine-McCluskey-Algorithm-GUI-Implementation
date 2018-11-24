#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector <string> binary;


void convertToBinary(int j)
{
	string str;
	
	
	while(j!=0)
	{
		str.push_back(((j%2)+'0'));
		j=j/2;
		
	}
	
	reverse(str.begin(),str.end());
	binary.push_back(str);
} 

int main()
{
	int n;
	
	cout<<"Digit : ";
	cin>>n;
	
	convertToBinary(n);
	
	cout<<binary[0]<<endl;
	

return 0;
}
