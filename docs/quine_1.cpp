#include <iostream>
#include <string>

using namespace std;

string writeup();
string marker();
void gen_writeup(string);

int main()
{
    gen_writeup(writeup());
    return 0;
}

string marker(string s)
{
    string s_ = "";
    int len = s.size();
    for (int i = 0; i < len; i++)
        if (s[i] == '\n')
            s_ += "\\n";
        else if (s[i] == '\t')
            s_ += "\\t";
        else if (s[i] == '\\')
            s_ += "\\\\";
        else if (s[i] == '\'')
            s_ += "\\\'";
        else if (s[i] == '\"')
            s_ += "\\\"";
        else
            s_ += s[i];
    
    return s_;
}

void gen_writeup(string s)
{
    cout<<"string writeup()\n{\n\tstring s = \""<<marker(s)<<"\";\n\tcout<<s;\n\treturn s;\n}\n";
}

string writeup()
{
    string s = "#include <iostream>\n#include <string>\n\nusing namespace std;\n\nstring writeup();\nstring marker();\nvoid gen_writeup(string);\n\nint main()\n{\n\tgen_writeup(writeup());\n\treturn 0;\n}\n\nstring marker(string s)\n{\n\tstring s_ = \"\";\n\tint len = s.size();\n\tfor (int i = 0; i < len; i++)\n\t\tif (s[i] == \'\\n\')\n\t\t\ts_ += \"\\\\n\";\n\t\telse if (s[i] == \'\\t\')\n\t\t\ts_ += \"\\\\t\";\n\t\telse if (s[i] == \'\\\\\')\n\t\t\ts_ += \"\\\\\\\\\";\n\t\telse if (s[i] == \'\\\'\')\n\t\t\ts_ += \"\\\\\\\'\";\n\t\telse if (s[i] == \'\\\"\')\n\t\t\ts_ += \"\\\\\\\"\";\n\t\telse\n\t\t\ts_+= s[i];\n\n\treturn s_;\n}\n\nvoid gen_writeup(string s)\n{\n\tcout<<\"string writeup()\\n{\\n\\tstring s = \\\"\"<<marker(s)<<\"\\\";\\n\\tcout<<s;\\n\\treturn s;\\n}\\n\";\n}\n\n";
    cout<<s;
    return s;
}
