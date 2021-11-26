#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(const char* s, const char* c)
{
	int k = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c' && s[i + 1] != '\0' && s[i + 2] != '\0')
			k++;
	}
	return k;
}


char* Change(char* R, const char* s, char* c)
{
    int i = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c' && s[i + 1] != '\0' && s[i + 2] != '\0')
        {
            strcat(c, "**");
            c += 2;
            i++;
        }
        else
        {
            *c++ = s[i + 1];
            *c = '\0';
        }
    }
    *c++ = s[i];
    *c++ = s[i + 1];
    *c++ = s[i + 2];
    *c = '\0';
    return R;
}


int main()
{
	char* c{};
    char* R{};

	cout << "Enter string:" << endl;

	char* s = new char[101];
	cin.getline(s, 100);

    cout << endl;

	if (Count(s, c))
		cout << "String contained " << Count(s, c) << " groups of abc" << endl;

        cout << endl;

    char* R1 = new char[151];
    R1[0] = '\0';
    char* R2;
    R2 = Change(R1, s, R1);
	
	cout << R2 << endl;
}