#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    s = ":" + s + " ";
    vector <string> world;
    int start;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ':' ) {
            start = i + 1;
        }
        else if (s[i] == 'A' || s[i] == 'P') start = i;
        else if ( ( (s[i] != ':' && s[i + 1] == ':') || (s[i] != ':' && ((s[i + 1] == 'A') || (s[i + 1] == 'P') ))) || (s[i] != ':' && s[i + 1] == ' ') )
            world.push_back(s.substr(start, i - start + 1 ));
    }
    s.erase(0,1);

    string gio = world[0];
    int hours = atoi(gio.c_str());
    if (world[world.size() - 1] == "PM") hours += 12;
    if (hours == 24 ) hours = 0;
    s = "";
    if (to_string(hours).size() == 1)
    s = "0" +to_string(hours)+":"+world[1]+":"+world[2];
    else s=to_string(hours)+":"+world[1]+":"+world[2];
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

   // string result = timeConversion(s);

    cout << atoi(s.c_str + 1 << "\n";

    fout.close();

    return 0;
}


