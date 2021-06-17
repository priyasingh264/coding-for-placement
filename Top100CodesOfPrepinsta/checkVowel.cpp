/******************************************************************************

*******************************************************************************/

#include <iostream>
using namespace std;
void vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<c<<" it is vowel\n";
    }
    else
    cout<<c<<" is not vowel";
}
int main()
{
    vowel('j');
    vowel('i');
    vowel('I');
    return 0;
}
