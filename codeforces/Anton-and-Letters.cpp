#include<iostream>
#include<set>

using namespace std;

int main(){
	
	string str;
	getline(cin, str);
	
	set<char> s;
	for(int i=0; i<str.length(); i++){
		if(str[i] >= 'a' && str[i] <='z')
			s.insert(str[i]);
	}
	
	cout<<s.size()<<"\n";
	

	return 0;
}
