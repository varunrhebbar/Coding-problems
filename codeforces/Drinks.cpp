#include<iostream>
#include<iomanip>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define l(s) s.length()
#define asort(a) sort(a, a+n)
#define dsort(a) sort(a, a+n, greater<int>())
#define all(x) x.begin(), x.end()
#define vasort(v) sort(all(v))
#define vdsort(v) sort(all(v), greater<int>())
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define sp(x, y) fixed<<setprecision(y)<<x
#define MOD 1000000007
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)

int main(){

	fast;

	int t;
	cin>>t;
	
	double p, tot=0.0;
	
	for(int i=0; i<t; i++){
		
		cin>>p;
		tot += p;
		
	}
	
	cout<<sp((tot/t), 12);

	return 0;
}
