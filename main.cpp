#include <iostream>
#include <clocale>
#include <string>

using namespace std;

const int MAX_GUESTS = 100;

struct Person{

    string name;
    string passport;
    int room;
    string in_date;
    string out_date;
    double price;

};


void head(){
    cout << "+------------------------+" << endl;
    cout << "|Практическая работа #8  |" << endl;
    cout << "+------------------------+" << endl;
    cout << "|Выполнил: Сабиров Ильназ|" << endl;
    cout << "|Группа: П-23            |" << endl;
    cout << "+------------------------+" << endl;
}

void menu(){
    cout << "+--------------------------------+" << endl;
    cout << "|           ГОСТИНИЦА            |" << endl;
    cout << "+--------------------------------+" << endl;
    cout << "|1.Добавить постояльца           |" << endl;
    cout << "|2.Изменить данные о постояльце  |" << endl;
    cout << "|3.Удалить постояльца            |" << endl;
    cout << "|4.Показать всех постояльцев     |" << endl;
    cout << "+--------------------------------+" << endl;    
}


int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    head();

    Person guests[MAX_GUESTS]; 
    int guestCount = 0; 

    int choice;
    char repeat;

    do{

        menu();
        cout << ":> ";
        cin >> choice;

        switch (choice){
        case 1: {

            if (guestCount >= MAX_GUESTS) {
                cout << "Достигнуто максимальное количество гостей." << endl;
                break;
            }

            Person NewPerson;

            cout << "+---------------------------------+" << endl;
            cout << "|      ДОБАВИТЬ ПОСТОЯЛЬЦА        |" << endl;
            cout << "+---------------------------------+" << endl;

            cout << "Введите ФИО:> " << endl;
            cin.ignore();
            getline(cin, NewPerson.name);

            cout << "Введите паспорт:> " << endl;
            cin >> NewPerson.passport;

            cout << "Введите номер комнаты:> " << endl;
            cin >> NewPerson.room;

            cout << "Введите дату заселения:> " << endl;
            cin >> NewPerson.in_date;

            cout << "Введите дату выселения:> " << endl;
            cin >> NewPerson.out_date;

            cout << "Ввелите цену за 1 ночь:> " << endl;
            cin >> NewPerson.price;

            guests[guestCount] = NewPerson; // Сохраняем нового постояльца
            guestCount++; // Увеличиваем счетчик гостей
            cout << "Постоялец успешно добавлен." << endl;
                
            break;
        }
        
        case 2:
            cout << "|2.Изменить данные о постояльце  |" << endl;
            break;

        case 3:
            cout << "|3.Удалить постояльца            |" << endl;
            break;

        case 4:
            cout << "+-------------------------------+" << endl;
            cout << "|      СПИСОК ПОСТОЯЛЬЦЕВ       |" << endl;
            cout << "+-------------------------------+" << endl;

                
            for (int i = 0; i < guestCount; i++) {
                cout << "Постоялец #" << (i + 1) << ": " << guests[i].name
                        << ", Паспорт: " << guests[i].passport
                        << ", Комната: " << guests[i].room
                        << ", Дата заселения: " << guests[i].in_date
                        << ", Дата выселения: " << guests[i].out_date
                        << ", Цена за ночь: " << guests[i].price << endl;
                }

            break;

        }










        cout << "Хотите повторить выполнение программы?(Y/N)" << endl;
        cout << ":> ";
        cin >> repeat;
        if(repeat == 'N' || repeat == 'n'){
            cout << "+------------------------+" << endl;
            cout << "|      ДО СВИДАНИЯ!      |" << endl;
            cout << "+------------------------+" << endl;
        }
    }while(repeat == 'Y' || repeat == 'y');

    return 0;
}