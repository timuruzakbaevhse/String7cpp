
#include <iostream>
#include <string>

using namespace std;

void modifyString(string& s, string& s1,
	string& s2)
{
	string result = "";

	for (int i = 0; i < s.length(); i++) {

		int k = 0;

		if (s[i] == s1[k]
			&& i + s1.length()
			<= s.length()) {

			int j;

			for (j = i; j < i + s1.length(); j++) {

				if (s[j] != s1[k]) {
					break;
				}
				else {
					k = k + 1;
				}
			}

			if (j == i + s1.length()) {
				result.append(s2);
				i = j - 1;
			}

			else {
				result.push_back(s[i]);
			}
		}

		else {
			result.push_back(s[i]);
		}
	}

	cout << result;
}

int main()
{
	string Strmain;
	cout << "Enter string" << endl;
	getline(cin, Strmain);

	string Substr1;
	cout << "Enter substring you want to modify " << endl;
	getline(cin, Substr1);

	string Substr2;
	cout << "Enter substring you want to modify to " << endl;
	getline(cin, Substr2);

	modifyString(Strmain, Substr1, Substr2);

	return 0;
}
