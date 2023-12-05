#include <iostream> 
#include <cstring> 
using namespace std;

void name_format(char *firstName, char *middleName, char *lastName, char *finalName){
    strcat(finalName, lastName);
    strcat(finalName, ", ");
    strcat(finalName, firstName);
    strcat(finalName, " ");
    strcat(finalName, middleName);
    cout << finalName << endl;
}

int main(int argc, char const *argv[])
{
    char firstName[20], middleName[20], lastName[20], finalName[80];
    cout << "Enter your first name: ";
    cin.getline(firstName, 20);
    cout << endl;
    cout << "Enter your middle name: ";
    cin.getline(middleName, 20);
    cout << endl;
    cout << "Enter your last name: ";
    cin.getline(lastName, 20);
    cout << endl; 
    name_format(firstName, middleName, lastName, finalName);
    return 0;
}
