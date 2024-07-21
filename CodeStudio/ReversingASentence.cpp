//Output - 
//input-> Hello World
//output->World Hello

#include <bits/stdc++.h>

string reverseString(string &str)
{
	string word;
	vector<string> sentence;
	stringstream ss(str);

	while(ss >> word)
	{
		sentence.push_back(word);
	}
	string variable = "";

	reverse(sentence.begin(), sentence.end());
	for(int i=0; i<sentence.size(); ++i)
	{
		variable+=sentence[i]+ " ";
	}
	return variable;
}
