#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
      int len = s.length();
    char s1[len];
    int j=0;
for(int i=0; i<len; ++i)
{
    if(s[i]==s[i+1])
    {
        i+=2;
    }
   s1[j] = s[i];
   ++j;
}
if(strlen(s1)==0)
{
    return "Empty String";
}
else
    return s1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
