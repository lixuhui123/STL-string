#if 1
#include <string>
#include "string.h"
#include <stdio.h>
int main()
{
	/*String s1 = "lixu97345646446";
	String s2;
	s2 = s1;
	String s3(5, 'v');
	s2.reverse();
	s3.insert(3,'p');
	s3.earse(3);
	cout << s3;*/

	string str = "123";
	cout << *(&str) <<" "<<&str[0]<<  endl;
	//printf("%p", &str[0]);
	system("pause");
	return 0;
}
#else
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1 = "lixuhui \099 1230";
	for (auto & i : s1)
	{
		cout << i;
	}
	system("pause");
	return 0;
}
#endif
