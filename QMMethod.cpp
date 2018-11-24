#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int> visited;
vector <string> binary;
vector <string> maxterms;
vector <int> used;
int nbit;


bool OneBitChange(int a,int b)
{
	int count=0,index;
	
	for(int i=0;i<nbit;i++)
	{
		if(binary[a][i]!=binary[b][i])
		{
			index=i;
			count++;
		}
	}
	
	if(count==1)
	{
		string str=binary[a];
		
		str[index]='_';
		
		binary.push_back(str);
	}
	
	return (count==1); // smart code by Richi!!
}


bool All_One_Bit_Change(int start, int end)
{
	int count=0;
	
	for (int i=start ; i<end-1 ; i++)
	{
		for (int j=i+1 ; j<end ; j++)
		{
			if (OneBitChange(i,j)) // func)
			{
				maxterms.push_back(maxterms[i]+","+maxterms[j]); 		//, is delimiter! yay.
				visited.push_back(0);
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

void convertToBinary(int j)
{
	string str;
		
	
	
	while(j!=0)
	{
		str.push_back(((j%2)+'0'));
		j=j/2;
	}
	
	j=str.size();
	
	while(j!=nbit)
	{
		str.push_back('0');
		j++;
	}
		
	reverse(str.begin(),str.end());
	binary.push_back(str);
} 



int main()
{
	int nmax;			// Input Module

	cout<<"Number of bits: ";
	cin >> nbit;

	cout << "\nNumber of Max-Terms: ";
	cin >> nmax;

	int maxterm[nmax];
	int temp;

	cout << "\nEnter the maxterms(Range : 0 - " << pow(2,nbit)-1 << "): \n";
	
	for(int i=0 ; i<nmax ; i++) 
	{
		cin>>temp;
		maxterms.push_back(to_string(temp));//to_string is inbuilt function in string.h
		visited.push_back(0);
		convertToBinary(temp);
	}
	
	if(All_One_Bit_Change)
	cout<<"\nCode Ran Successfully!!";
		
	cout<<"\n\n\n\n************************************\n\n";
	for(int i=0;i<maxterms.size();i++)
	cout<<maxterm[i]<<endl;		
		
	
	return 0;
}
