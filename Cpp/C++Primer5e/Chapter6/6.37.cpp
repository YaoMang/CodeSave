#include <string>
using std::string;

using sRTypeArr = string(&) [10];
typedef string classical[10];

string x[10];

sRTypeArr declare();
auto declare() -> string(&) [10]; //使用这个最为简洁
classical& declare();
decltype(x)& declare();
