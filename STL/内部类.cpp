//
//using namespace std;
//class A
//{
//private:
//	static int k;
//	int h;
//public:
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;  //OK
//			cout << a.h << endl;//OK
//		}
//	};
//};
//int A::k = 1;
//int main()
//{
//	A::B b;
//	
//	b.foo(A());
//	system("pause");
//	return 0;
//}