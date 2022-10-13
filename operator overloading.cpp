#include<iostream>
using namespace std;
class A{
	private:
		int x;
		public:
			A(int y)
			{
				x=y;
			}
			void operator -=(int y)
			{
				x-=y;
			}
			void display() const
			{
				cout<<this->x;
				
			}
};
int main()
{
	A a1(5);
	a1-=3;
	a1.display();
}
