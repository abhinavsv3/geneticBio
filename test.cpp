#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
	string s = ">sequence ";
	string s1 = "Sequence";
	string s2 = "|Char: ";

	int num = 0;
	ifstream fin("testfasta.fasta");
	string content;
	content.assign((std::istreambuf_iterator<char>(fin) ), (std::istreambuf_iterator<char>()));
	int k = content.find('\n')+1;
	int l = content.length();
	string n;	
	n.assign(content,k,l);
	int j = count(n.begin(),n.end(),'\n');
	int ch = n.length() - 2*j;
	cout<<n;

	string z,zname;
	int it = 0, tot = n.length();	
	while(ch)
	{
	    if(n[it] != '\n' && n[it] != '\r')
           {

		ostringstream cnum,cch;	
		cnum << num;cch<<ch;
		string lin1 = s + cnum.str() + s2 + cch.str()+"\n";		
		cout<<"Generating ..\n"<<lin1;
		z = lin1 + n.substr(it,tot);
		zname = s1 +cnum.str()+ ".fasta";
		ofstream fout(zname.data());
		fout<<z;
		fout.close();
		ch--;num++;
	   }
		it++;
	}

  return 0;
}
