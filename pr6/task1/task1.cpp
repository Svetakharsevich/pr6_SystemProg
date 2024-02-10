
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    setlocale(LC_ALL,"Russian");
    char x[120];
    int word,count=0;
    cout << "Введите строку" << endl;
    gets_s(x);

    int i = 0;

    while (x[i] == ' ' && x[i] != '\0')
        i++;
    word = 0;
    while (x[i] != '\0') {
        if (x[i] != ' ' && word == 0)
        {
            word = 1;
            count++;
        }
        else if (x[i] == ' ')
            word = 0;
        i++;
    }
    cout<<puts(x)<<endl;
    cout << "Количество слов в строке "<< count << endl;

    return 0;

}