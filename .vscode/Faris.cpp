#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> msg {"Hello, nama saya Faris Syarif Maulana"};
for (const string& word : msg)
{
cout << word << " ";
}
cout << endl;
}