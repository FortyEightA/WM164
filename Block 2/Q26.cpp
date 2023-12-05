#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string breaksentence(string sentence, string newsentence){
    for (int i = 0; i < sentence.length(); i++)
    {
        if (isupper(sentence[i]) && i != 0)
        {
            newsentence += " ";
            newsentence += tolower(sentence[i]);
        }
        else if (i == 0)
        {
            newsentence += toupper(sentence[i]);
        }
        else if (islower(sentence[i]))
        {
            newsentence += sentence[i];
        }
    }
    return newsentence;
}
int main(int argc, char const *argv[])
{
    string sentence, newSentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);    
    newSentence = breaksentence(sentence, newSentence);
    cout << newSentence << endl;
    return 0;
}