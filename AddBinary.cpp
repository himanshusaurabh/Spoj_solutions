#include  <iostream>
#include  <cstdio>
#include  <string>

using namespace std;

string compute(string a,string b)
{
	int alen=a.length();
	int blen=b.length();
	bool carry=false;
	string result;
	while(alen>0||blen>0)
	{
		int p=(alen<=0)?0:a[alen-1]-'0';
		int q=(blen<=0)?0:b[blen-1]-'0';
		int c=carry?1:0;
		result.insert(result.begin(),'0'+((p+q+c)&1));
		carry=(p+q+c>1);
		alen--;blen--;

	}
	if(carry)	result.insert(result.begin(),'1');

	return result;
}


int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	cout<<a<<"+"<<b<<"="<<compute(a,b)<<endl;

}
