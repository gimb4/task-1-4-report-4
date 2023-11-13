#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    char start_station, end_station;


    cout << "Введите начальную станцию (A, B, C, D, E): ";
    cin >> start_station;

    cout << "Введите конечную станцию (A, B, C, D, E): ";
    cin >> end_station;

    
    start_station = tolower(start_station);
    end_station = tolower(end_station);

   
    if (start_station < 'a' || start_station > 'e' || end_station < 'a' || end_station > 'e') {
        cout << "Некорректный ввод станций!" << endl;
        return 0;
    }

   
    int distance = abs(end_station - start_station);
    int time = distance * 10;

    cout << "Время в пути: " << time << " минут" << endl;

    return 0;
}