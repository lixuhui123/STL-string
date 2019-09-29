//#include <iostream>
//#include <string>
//using namespace std;
//void reversedeal(string &s, int spos, int epos)
//{
//	int i, j;
//	for (i=spos,j=epos-1;i<j;i++,j--)
//	{
//		swap(s[i], s[j]);
//	}
//}
//string reverseWrds(string s)
//{
//	int spos = 0;
//	int epos = s.find(' ');
//	while (epos>=0)
//	{
//		reversedeal(s, spos, epos);
//		spos = epos + 1;
//		epos = s.find(' ', spos);
//	}
//	reversedeal(s, spos, s.size());
//	return s;
//}
//int main()
//{
//	cout <<reverseWrds("ni ma bi");
//	system("pause"); 
//	return 0;
//}