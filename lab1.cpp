#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    
    int numVisitors;
    cout << "Введите количество посетителей спортзала за день: ";
    cin >> numVisitors;

    int age;
    int maxAge = INT_MIN; 
    int minAge = INT_MAX; 
    int totalAge = 0;     

    for (int i = 1; i <= numVisitors; ++i) {
        cout << "Введите возраст посетителя " << i << ": ";
        cin >> age;

        
        if (age > maxAge) {
            maxAge = age;
        }
        if (age < minAge) {
            minAge = age;
        }
        
        totalAge += age;
    }

      int averageAge = static_cast<int>(totalAge) / numVisitors;

    cout << "\nСамый молодой посетитель: " << minAge << " лет\n";
    cout << "Самый старший посетитель: " << maxAge << " лет\n";
    cout << "Средний возраст посетителей: " << averageAge << " лет\n";

    return 0;
}