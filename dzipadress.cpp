№1

#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string ip;
    cout << "Введіть IP-адресу: ";
    getline(cin, ip);

    stringstream ss(ip);
    string part;
    int parts = 0;

    while (getline(ss, part, '.')) {
        for (char c : part) {
            if (!isdigit(c)) {
                cout << "Некоректний IP-адрес\n";
                return 0;
            }
        }

        int num = stoi(part);
        if (num < 0 || num > 255) {
            cout << "Некоректний IP-адрес\n";
            return 0;
        }
        parts++;
    }

    if (parts == 4)
        cout << "Коректний IP-адрес\n";
    else
        cout << "Некоректний IP-адрес\n";

    return 0;
}

//№2
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    const int size = 5; 
//    std::string surnames[size]; 
//
//    std::cout << "Введіть 5 прізвищ студентів через пробіл: ";
//    for (int i = 0; i < size; ++i) {
//        std::cin >> surnames[i];
//    }
//    std::cout << "\nПрізвища в зворотному порядку:\n";
//    for (int i = size - 1; i >= 0; --i) {
//        std::cout << surnames[i] << std::endl;
//    }
//    return 0;
//}

//№3
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    std::string input; 
//    std::cout << "Введіть рядок символів: ";
//    std::getline(std::cin, input);
//
//    for (char& c : input) {
//        if (c == ' ') {
//            c = '\t';
//        }
//    }
//    std::cout << "Результат:\n" << input << std::endl;
//
//    return 0;
//}

//№4
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    string input;
//
//    cout << "Введіть рядок символів: ";
//    getline(cin, input);
//
//    int letter = 0;
//    int digit = 0;  
//    int other = 0;  
//
//    for (char c : input) {
//        if ((c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я')) {
//            letter++;
//        }
//        else if (c >= '0' && c <= '9') {
//            digit++;
//        }
//        else {
//            other++;
//        }
//    }
//    cout << "Кількість літер: " << letter << endl;
//    cout << "Кількість цифр: " << digit << endl;
//    cout << "Інше: " << other << endl;
//
//    return 0;
//}

//№5
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//    using namespace std;
//
//    int main() {
//        SetConsoleCP(1251);
//        SetConsoleOutputCP(1251);
//        string input;
//        cout << "Введіть речення: ";
//        getline(cin, input);
//
//        int wordCount = 0;
//
//        for (int i = 0; i < input.length(); i++) {
//            if (input[i] != ' ' && (i == 0 || input[i - 1] == ' ')) {
//                wordCount++;
//            }
//        }
//        cout << "Кількість слів: " << wordCount << endl;
//        return 0;
//    }
//№5
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//       SetConsoleCP(1251);
//       SetConsoleOutputCP(1251);
//    string input;
//    cout << "Введіть рядок: ";
//    getline(cin, input);
//
//    int n = input.length();
//    bool Palindrom = true;
//
//    for (int i = 0; i < n / 2; i++) {
//        if (input[i] != input[n - 1 - i]) {
//            Palindrom = false;
//            break;
//        }
//    }
//    if (Palindrom) {
//        cout << "Рядок є паліндромом." << endl;
//    }
//    else {
//        cout << "Рядок не є паліндромом." << endl;
//    }
//    return 0;
//}
//№6
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    char letter;
//    cout << "Введіть букву українського алфавіту: ";
//    cin >> letter;
//    if (letter >= 'а' && letter <= 'ю') {
//        cout << "Наступна буква: " << static_cast<char>(letter + 1) << endl;
//    }
//    else if (letter == 'я') {
//        cout << "Далі букв немає." << endl;
//    }
//    else {
//        cout << "Введена буква не є українською." << endl;
//    }
//
//    return 0;
//}


