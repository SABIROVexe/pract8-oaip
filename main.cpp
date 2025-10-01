#include <iostream>
#include <clocale>

using namespace std;

void head(){
    cout << "+------------------------+" << endl;
    cout << "|Практическая работа #8  |" << endl;
    cout << "+------------------------+" << endl;
    cout << "|Выполнил: Сабиров Ильназ|" << endl;
    cout << "|Группа: П-23            |" << endl;
    cout << "+------------------------+" << endl;
}




int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    head();

    int choice;
    char repeat;

    do{

        cout << "+--------------------------------+" << endl;
        cout << "|           ГОСТИНИЦА            |" << endl;
        cout << "+--------------------------------+" << endl;
        cout << "|1.Добавить постояльца           |" << endl;
        cout << "|2.Изменить данные о постояльце  |" << endl;
        cout << "|3.Удалить постояльца            |" << endl;
        cout << "|4.Показать всех постояльцев     |" << endl;
        cout << "+--------------------------------+" << endl;
        
        cout << ":> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "|1.Добавить постояльца           |" << endl;
            break;
        
        case 2:
            cout << "|2.Изменить данные о постояльце  |" << endl;
            break;

        case 3:
            cout << "|3.Удалить постояльца            |" << endl;
            break;

        case 4:
            cout << "|4.Показать всех постояльцев     |" << endl;
            break;

        }










        cout << "Хотите повторить выполнение программы?(Y/N)" << endl;
        cout << ":> ";
        cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');

    return 0;
}