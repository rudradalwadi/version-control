#include <iostream>
using namespace std;

class frist{
	private:
		int salary;
		public:
			void getsalary (int a)
			{
				salary = a;
			}
			void setsalary()
			{
				cout <<"your salary is:"<< salary;
			}
};
        int main()
        {
        	frist f;
        	f.getsalary(23456);
        	f.setsalary();
        	return 0;
		}
