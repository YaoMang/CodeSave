#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

string make_plural(size_t, const string&, const string &ending = "s");

int main(int argc, char** argv)
{
    cout << make_plural(2, "faliure") << endl;
    cout << make_plural(2, "success", "es") << endl;

    return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return ctr > 1 ? word + ending : word;
}