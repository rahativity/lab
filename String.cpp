#include <bits/stdc++.h>
using namespace std;
int strlength(const string &str)
{
    return str.length();
}
string SubString(const string &str, int st, int nofc)
{
    int l = str.length();
    if (st < 0 || st >= l || nofc <= 0 || st + nofc > l)
        return "";
    return str.substr(st, nofc);
}
string Concatenation(const string &str1, const string &str2)
{
    return str1 + str2;
}
int Indexing(const string &str, const string &pattern)
{
    int pos = str.find(pattern);
    return (pos == string::npos) ? -1 : pos;
}
string Insertion(const string &str, int pos, const string &insert)
{
    if (pos < 0 || pos > str.length())
        return "";
    string res = str.substr(0, pos) + insert + str.substr(pos);
    return res;
}
string DeleteStr(const string &str, const string &pattern)
{
    int pos = Indexing(str, pattern);
    if (pos == -1)
        return str;
    string res = str.substr(0, pos) + str.substr(pos + pattern.length());
    return res;
}
string ReplaceStr(const string &str, const string &old, const string &neww)
{
    int pos = Indexing(str, old);
    if (pos == -1)
        return str;
    string res = str.substr(0, pos) + neww +
                 str.substr(pos + old.length());
    return res;
}
string DeleteAll(const string &str, const string &pattern)
{
    string temp = str;
    int pos;
    while ((pos = Indexing(temp, pattern)) != -1)
    {
        temp = temp.substr(0, pos) + temp.substr(pos + pattern.length());
    }
    return temp;
}
string ReplaceAll(const string &str, const string &old, const string &neww)
{
    string temp = str;
    int pos;
    while ((pos = Indexing(temp, old)) != -1)
    {
        temp = temp.substr(0, pos) + neww + temp.substr(pos + old.length());
    }
    return temp;
}
int main()
{
    int option, st, nofc, Loc;
    string str1, str2, str3, result;
    while (true)
    {
        cout << "\n1. Input a string\n";
        cout << "2. String length\n";
        cout << "3. Display string\n";
        cout << "4. Substring of the string\n";
        cout << "5. Concatenate two strings\n";
        cout << "6. Indexing of a Sub String\n";
        cout << "7. Insert a string at a position\n";
        cout << "8. Delete a substring\n";
        cout << "9. Replace a substring\n";
        cout << "10. Delete All Pattern\n";
        cout << "11. Replace All Pattern\n";
        cout << "0. Exit\nEnter your option: ";
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case 1:
            cout << "Enter a string: ";
            getline(cin, str1);
            break;
        case 2:
            cout << "Length of the string: " << strlength(str1) << endl;
            break;
        case 3:
            cout << "Inputted string: " << str1 << endl;
            break;
        case 4:
            cout << "Enter the starting position: ";
            cin >> st;
            cout << "Enter number of characters: ";
            cin >> nofc;
            cin.ignore();
            result = SubString(str1, st, nofc);
            cout << "Substring is: " << result << endl;
            break;
        case 5:
            cout << "Enter second string: ";
            getline(cin, str2);
            result = Concatenation(str1, str2);
            cout << "Concatenation is: " << result << endl;
            break;
        case 6:
            cout << "Enter the pattern to find: ";
            getline(cin, str2);
            Loc = Indexing(str1, str2);
            if (Loc == -1)
                cout << "Pattern not found.\n";
            else
                cout << "Pattern found at position: " << Loc << endl;
            break;
        case 7:
            cout << "Enter the string to insert: ";
            getline(cin, str2);
            cout << "Enter the position to insert at: ";
            cin >> Loc;
            cin.ignore();
            result = Insertion(str1, Loc, str2);
            cout << "After insertion: " << result << endl;
            break;
        case 8:
            cout << "Enter the pattern to delete: ";
            getline(cin, str2);
            result = DeleteStr(str1, str2);
            cout << "After deletion: " << result << endl;
            break;
        case 9:
            cout << "Enter the old substring: ";
            getline(cin, str2);
            cout << "Enter the new substring: ";
            getline(cin, str3);
            result = ReplaceStr(str1, str2, str3);
            cout << "After replacement: " << result << endl;
            break;
        case 10:
            cout << "Enter the pattern to delete all: ";
            getline(cin, str2);
            result = DeleteAll(str1, str2);
            cout << "After deleting all: " << result << endl;
            break;
        case 11:
            cout << "Enter the old substring: ";
            getline(cin, str2);
            cout << "Enter the new substring: ";
            getline(cin, str3);
            result = ReplaceAll(str1, str2, str3);
            cout << "After replacing all: " << result << endl;
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid Input. Try again\n";
        }
    }
    return 0;
}
