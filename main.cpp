#include <iostream>

using namespace std;

int main()
{
    string character_name = "Thomas";
    int character_age = 10;
    cout << "There was once a man name " << character_name << endl;
    cout << "He was " << character_age << " years old." << endl;
    character_name += 106;
    character_name += 111;
    character_name += 104;
    character_name += 110;
    cout << "He like the name " << character_name << endl;
    cout << "But did not like being " << character_age << endl;
    return 0;
}
