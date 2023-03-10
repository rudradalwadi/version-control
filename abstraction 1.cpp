#include<iostream>
using namespace std;

class superdemo
{
	private:
		void show()
		{
			cout << "im from super class demo as a public";
			
		}
		public:
			int x;
};
    class subdemo : public superdemo
	{ 
	public;
    	{
    		cout <<"im from sub class demo as a public";
		}
	};
	int main()
	{
		super classdemo sub;
		sub.showsub();
		sub.x =20
		cout <<" x variable value is:"<<sub.x;
		return 0;
	}
