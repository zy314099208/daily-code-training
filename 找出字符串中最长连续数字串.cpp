#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	cin >> str;
	string temp = "";
	string result = "";
	int i = 0;
	int maxlength = 0;
	while (i<str.size())
	{
		int j = i;
		while (str[j] >= '0'&&str[j] <= '9')
		{
			temp += str[j];
			j++;
		}
		if (temp.size()>maxlength)
		{
			maxlength = temp.size();
			result = temp;
		}
		else
			maxlength = result.size();
		if (j == i)
			i = j + 1;
		else
			i = j;
		temp.clear();
	}
	cout << result << endl;
	cout << maxlength << endl;
	system("pause");
	return 0;
}