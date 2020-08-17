#include <iostream>
#include <string>

using namespace std;

bool npa(string a);
bool coc(string b);
bool ln(string c);

int main(int argc, char *argv[])
{
    string phoneNum;

    cout << "Enter a phone number. IE 2168675309" << endl;
    cin >> phoneNum;    

    if (phoneNum.length() != 10)
    {
        cout << "Invalid phone number! Number is the wrong length" << endl;
        return 0;
    }

    string str1 = phoneNum.substr(0,3);
    string str2 = phoneNum.substr(3,3);
    string str3 = phoneNum.substr(5,4);

    bool t1 = npa(str1);
    bool t2 = coc(str2); 
    bool t3 = ln(str3);

    if (t1 && t2 && t3)
    {
        cout << "Phone number is valid" << endl;
    }
    else
    {
        cout << "Phone number is not valid!" << endl;
    }
    

    return 0;
}

bool npa(string a)
{
    /*NPA
        2-9 for first digit
        0-9 for second and third digit
    */
    bool t = true;
    char w = a[0];
    char x = a[1];
    char y = a[2];

    if (w >= 50 && w <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    if (x >= 48 && x <= 57)
    {
        t = true;
    }
    else
    {
       goto bad;
    }

    if (y >= 48 && y <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    return true; 
    bad:
    cout << "invalid NPA" << endl;
    return false;
}

bool coc(string b)
{
    /* Central office code
    2-9 for first digit
    0-9 for second and third digit */

    bool t = true;
    char w = b[0];
    char x = b[1];
    char y = b[2];

    if (w >= 50 && w <= 57)
    {
        t = true;
    }
    else
    {
       goto bad;
    }

    if (x >= 48 && x <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    if (y >= 48 && y <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    return true; 
    bad:
    cout << "invalid central office code" << endl;
    return false;
}

bool ln(string c)
{
    /*Line Number
    0-9 for all four digits */

    bool t = true;
    char w = c[0];
    char x = c[1];
    char y = c[2];
    char z = c[3];

    if (w >= 48 && w <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    if (x >= 48 && x <= 57)
    {
        t = true;
    }
    else
    {
       goto bad;
    }

    if (y >= 48 && y <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    if (z >= 48 && z <= 57)
    {
        t = true;
    }
    else
    {
        goto bad;
    }

    return true; 
    bad:
    cout << "invalid line number" << endl;
    return false; 
}
