#include<iostream>
using namespace std;

class CDummy
{
	public:
		static int n;
		CDummy() { ++n; }
		~CDummy() { --n; }
};

int CDummy::n = 0;

int main()
{
	CDummy a;
	CDummy b[5];
	CDummy* c=new CDummy;
	cout<<b[1].n<<"\n";
	delete c;
	cout<<a.n<<endl;
	cout<<CDummy::n<<"\n";
	return 0;
}
