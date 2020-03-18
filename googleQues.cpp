//To find the first repeated character in the string

#include <bits/stdc++.h> 
using namespace std; 
void check(string str) 
{  
	int n = str.size(); 
	int freq[26]; 
    for(int k=0;k<26;k++)
    {
        freq[k]=0;
    }

	for (int i = 0; i < n; i++) 
    {
	    freq[str[i] - 'a']++;
    }
	for (int i = 0; i < n; i++)
    { 

		if (freq[str[i] - 'a'] != 0) { 
            if(freq[str[i] - 'a'] ==2)
            {
                cout<<"The repeated element is: "<<str[i]<<endl;
                break;
            }
			freq[str[i] - 'a'] = 0; 
		} 
        if(i ==n-1)
        {
            cout<<"No repeatetion found"<<endl;
        }
	} 
} 

int main() 
{ 
    string str; 
    cout<<"Enter the string:";
    cin>>str;
	check(str); 
	return 0; 
} 
