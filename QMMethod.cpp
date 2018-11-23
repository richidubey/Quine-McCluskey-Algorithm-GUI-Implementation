#include<bits/stdc++.h>
vector <string> binary;
vector <string> maxterms;
vector <int> used;
using namespace std;

bool All_One_Bit_Change(int start, int end)
{
	int count=0;
	
	for (int i=start ; i<end-1 ; i++)
	{
		for (int j=i+1 ; j<end ; j++)
		{
			if (onebitchangeoccurs // func)
			{
				maxterms.push_back(maxterm[i]+","+maxterm[j]); 		//, is delimiter! yay.
				binary.push_back(binaryofi,j);
				visited[i] = 1;
				visited[j] = 1;	
				count++;
			}
		}
	}
	if(count==0)
		return true;
	
	else
	{
		return All_One_Bit_Change(end+1,end+count);
	}
	
}  



int main()
{
	int nbit,nmax;			// Input Module

	cout<<"Number of bits: ";
	cin >> nbit;

	cout << "\nNumber of Max-Terms: ";
	cin >> nmax;

	int maxterm[nmax];


	cout << "\nEnter the maxterms(Range : 0 - " << pow(2,nbit)-1 << "): \n";
	
	for(int i=0 ; i<nmax ; i++) 
	{
		cin>>maxterm[i];
	}
	
	
	
	return 0;
}
