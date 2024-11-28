#include <iostream>
#include <math.h>
#include <numbers>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //task1
    /*int result{};
    for (int i = 2; i <= 35; i += 3) {
        result += i;
    }
    cout << result;*/

    //task2
    /*double result{};
    for (double i = 1; i <= 10; i++) {
        result += 1 / i;
    }
    cout << round(result * 100) / 100;*/

    //task3
    /*double result{};
    for (double i = 3; i <= 113; i += 2) {
        result += (i - 1) / i;
    }
    cout << round(result * 100) / 100;*/
    
    //task4
    /*double testvalue;
    cin >> testvalue;

    double result{};
    for (int i = 1; i <= 9; i++) {
        result += cos(testvalue * i)/pow(testvalue, i-1); 
    }
    // pow монжно заменить циклом, который перемножает сколько нужно раз 
    // и возвращает переменную с нужным значением
    if (testvalue == 0) {
        cout << 0;
    }
    else {
        cout << round(result * 100) / 100;
    }*/

    //task5
    /*double a1, d;
    cout << "Введите первый член арифметической прогрессии и её разность" << endl;
    cin >> a1 >> d;

    double result{};
    for (int i = 0; i <= 9; i++) {
        result += (a1 + d*i) * (a1 + d*i);
    }
    cout << round(result * 100) / 100;*/ 

    //task6
    /*for (double x = -4; x <= 4; x += 0.5) {
        cout << round((0.5 * x * x - 7.0 * x)*100)/100 << endl;
    }*/

    //task7
    /*int result = 1;
    for (int i = 1; i <= 6; i++) {
        result *= i;
    }
    cout << result << endl; */

    //task8
    /*int result{};
    for (int i = 1; i <= 6; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        result += factorial; 
    }
    cout << result << endl;*/

    //task9
    /*double result{};
    for (double i = 1; i <= 6; i++) {
        double factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        result += pow(-1, i) * pow(5, i) / factorial;
    }
    cout << round(result * 100) / 100;*/

    //task10
    /*long int result = 1;
    for (int i = 0; i < 7; i++) {
        result *= 3;
    }
    cout << result << endl;*/

    //task11
    /*for (int i = 1; i <= 6; i++) {
        cout << i << " ";
    }
    cout << "\n"; 
    for (int i = 1; i <= 6; i++) {
        cout << 5 << " ";
    }*/

    //task12
    /*double x;
    cin >> x;
    double result{};

    for (int i = 0; i <= 10; i++) {
        result += 1 / pow(x, i);
    }

    if (x == 0) {
        cout << 0;
    }
    else {
        cout << round(result * 100) / 100;  
    }*/

    //task13
    /*for (float x = -1.5; x < 1.6; x += 0.1) {
        if (x <= -1) {
            cout << 1 << " ";
        }
        else if (x > 1) {
            cout << -1 << " ";
        } else if (x > -0.09 && x < 0.0001) {
            cout << 0 << " ";
        } else {
            cout << round((-x)*100)/100 << " ";
        }
    }*/

    //task14
    /*int a = 1;
    int b = 1;
    int c{};
    cout << a << " " << b << " ";
    for (int i = 0; i < 6; i++) {
        cout << a + b << " ";
        c = a;
        a = a + b;
        b = c;
    }*/

    //task15
    /*double up = 0, down = 0;
    int a = 1;
    int b = 1;
    int c{};
    for (int i = 0; i < 3; i++) {
        c = a;
        a = a + b;
        b = c;
    }
    down = a;
    cout << "Знаменатель: " << down << endl;
    a = 2;
    b = 1;
    for (int i = 0; i < 3; i++) {
        c = a;
        a = a + b;
        b = c;
    }
    up = a;
    cout << "Числитель: " << up << endl;
    cout << round(up / down * 100)/100;*/

    //task16
    /*double power{};
    double current = 1;
    for (int i = 0; i < 64; i++) {
        current *= 2;
    }
    current = current / 15;
    while (current > 10) {
        power += 1;
        current /= 10;
    }
    cout << round(current * 100) / 100 << endl;
    cout << power << endl;*/

    //task17
    /*const double R = 6350;
    for (int i = 1; i <= 10; i++) {
        double result = pow((R+i)*(R+i) - R*R, 0.5);
        cout << round(result*100)/100 << "\t";
    }*/

    //task18
    /*long int result{}; 
    int begin = 10;
    for (int i = 3; i <= 24; i += 3) {
        result = begin * pow(2, i/3);
        cout << result << "\t";
    }*/

    //task1
    /*double x;
    cin >> x;
    long double result{};
    double n = 1;

    while (abs(cos(n * x) / (n * n)) >= 0.0001) {
        result += (cos(n * x) / (n * n));
        n++;
    }
    cout << result;*/

    //task2
    /*double result = 1;
    double answer = 0;

    for (int i = 1; result <= 30000; i += 3) {
        result *= i;
        answer = i;
    }
    cout << answer-3;*/

    //task3
    /*double a1, d, p;
    cout << "Введите первый член арифметической прогрессии, её разность и максимальную сумму" << endl;
    cin >> a1 >> d >> p;

    double result{};
    int answer{};
    if ((d<0 && p > a1) || (d > 0 && p < a1)) {
        cout << 0;
    }
    else {
        for (int n = 0; result <= p; n++) {
            result += (a1 + d * n);
            answer = n;
        }
        cout << answer;
    }*/

    //task4
    /*double test;
    cin >> test;
    double summa{};
    double bufer{};
    if (test == 0) {
        cout << 1;
    }
    else if (test < 1) {
        for (int i = 0; pow(test, i) >= 0.0001; i += 2) {
            summa += pow(test, i);
            bufer = i;
        }
        cout << round((summa - pow(test, bufer))*100)/100;
    }
    else {
        cout << 0;
    }*/

    //task5
    /*int m, n;
    cout << "Введите два целых числа" << endl;
    cin >> m >> n;
    if ((m == n) || (m == 0) || (n == 0)) {
        cout << 0 << "\t" << 0;
    }
    else if (m < n) {
        cout << n / m << "\t" << n % m;
    }
    else {
        cout << m / n << "\t" << m % n;
    }*/

    //task6
    /*double count = 10;
    int result{};
    for (int time = 3; count < 100000; time += 3) {
        count *= 2;
        result = time;
    }
    cout << result;*/

    //task7
    /*double count = 10;
    double allWay{};
    double answer{};

    for (int i = 1; i <= 7; i++) {
        allWay += count;
        count *= 1.1;
    }
    cout << round(allWay*100)/100 << endl;

    allWay = 0;
    count = 10;
    for (int i = 1; allWay < 100; i++) {
        allWay += count;
        count *= 1.1;
        answer = i;
    }
    cout << answer << endl;

    allWay = 0;
    count = 10;
    for (int i = 1; count <= 20; i++) {
        allWay += count;
        count *= 1.1;
        answer = i;
    }
    cout << answer << endl;*/

    //task8
    /*double allMoney = 10000;
    int result{};
    for (int month = 1; allMoney < 20000; month++) {
        allMoney *= 1.08;
        result = month;
    }
    cout << result;*/

    //task9
    /*double length = 0.1;
    int answer{};
    for (int i = 1; length > 0.0000000001; i++) {
        length /= 2;
        answer = i;
    }
    cout << answer;*/

    //task10
    /*double n1, n2, n3;
    n1 = 1; n2 = 2;
    double d1, d2, d3;
    d1 = d2 = 1;
    double current{}, last = 1000;
    int result{};
    for (int i = 3; abs(current - last) > 0.001; i++) {
        last = current;
        n3 = n1 + n2;
        d3 = d1 + d2;
        current = n3 / d3;
        n1 = n2; d1 = d2;
        n2 = n3; d2 = d3;
        result = i;
    }
    cout << round(current * 100) / 100 << "\n" << result;*/

    //task1
    double summa{}, current = 1;
    for (double x = 0.1; x <= 1; x += 0.1) {
        current = 1;
        summa = 0;
        for (int i = 0; abs(current) >= 0.0001; i++) {
            double factorial = 1;
            for (int j = 1; j <= 2*i; j++) {
                if (i == 0) {
                    factorial = 1;
                    break;
                }
                else {
                    factorial *= j;
                }
            }
            current = pow(-1, i) * pow(x, 2 * i) / factorial;
            summa += current;
        }
        cout << summa << "\t" << cos(x) << endl;
    }

    //task2
    /*double summa{}, current = 1;
    for (double x = 0.1; x <= 0.8; x += 0.1) {
        current = 1;
        summa = 0;
        for (int i = 1; abs(pow(x,i)) >= 0.0001; i++) {
            current = pow(x,i)*sin(numbers::pi * i/ 4);
            summa += current;
        }
        cout << summa << "\t" << x*sin(numbers::pi / 4) / (1 - 2*x*cos(numbers::pi / 4) + pow(x, 2)) << endl;
    }*/

    //task3
    /*double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 1; x += 0.1) {
        current = 1;
        summa = 0;
        for (int i = 1; abs(current) >= 0.0001; i++) {
            double factorial = 1;
            for (int j = 1; j <= i; j++) {
                if (i == 0) {
                    factorial = 1;
                    break;
                }
                else {
                    factorial *= j;
                }
            }
            current = cos(i*x) / factorial;
            summa += current;
            y = pow(numbers::e, cos(x)) * cos(sin(x));
        }
        cout << summa+1 << "\t" << y << endl;
    }*/

    //task4
    /*double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 1; x += 0.1) {
        current = 1;
        summa = 0;
        for (int i = 0; abs(current) >= 0.0001; i++) {
            double factorial = 1;
            for (int j = 1; j <= i; j++) {
                if (i == 0) {
                    factorial = 1;
                    break;
                }
                else {
                    factorial *= j;
                }
            }
            current = pow(x, 2*i) * (2*i+1) / factorial;
            summa += current;
            y = pow(numbers::e, x*x) * (1+2*x*x);
        }
        cout << summa << "\t" << y << endl;
    }*/

    //task5
    /*double summa{}, current = 1, y{};
    for (double x = numbers::pi / 5; x <= numbers::pi+0.1 ; x += numbers::pi / 25) {
        current = 1;
        summa = 0;
        for (int i = 1; abs(current) >= 0.0001; i++) {
            current = pow(-1, i) * cos(i*x) / pow(i, 2);
            summa += current;
            y = (pow(x, 2) - (pow(numbers::pi, 2) / 3)) / 4;
        }
        cout << summa << "\t" << y << endl;
    }*/

    //task6
    /*double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 1.001; x += 0.1) {
        current = 1;
        summa = 0;
        for (int i = 1; abs(current) >= 0.0001; i++) {
            current = pow(-1, i + 1) * pow(x, 2 * i + 1) / (4 * i * i - 1);
            summa += current;
            y = ((1 + x * x) * atan(x) / 2) - x/2;
        }
        cout << summa << "\t" << y << endl;
    }*/

    //task7
   /* double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 1.01; x += 0.05) {
        current = 1;
        summa = 0;
        for (int i = 0; abs(current) >= 0.0001; i++) {
            double factorial = 1;
            for (int j = 1; j <= 2*i; j++) {
                if (i == 0) {
                    factorial = 1;
                    break;
                }
                else {
                    factorial *= j;
                }
            }
            current = pow(x, 2*i) / factorial;
            summa += current;
            y = (pow(numbers::e, x) + pow(numbers::e, -x))/2;
        }
        cout << summa << "\t" << y << endl;
    }*/

    //task8
    /*double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 1.001; x += 0.05) {
        current = 1;
        summa = 0;
        for (int i = 0; abs(current) >= 0.0001; i++) {
            double factorial = 1;
            for (int j = 1; j <= i; j++) {
                if (i == 0) {
                    factorial = 1;
                    break;
                }
                else {
                    factorial *= j;
                }
            }
            current = pow(2*x, i) / factorial;
            summa += current;
            y = pow(numbers::e, 2*x);
        }
        cout << summa << "\t" << y << endl;
    }*/

    //task9
    /*double summa{}, current = 1, y{};
    for (double x = 0.1; x <= 0.5001; x += 0.05) {
        current = 1;
        summa = 0;
        for (int i = 0; abs(current) >= 0.0001; i++) {
            current = pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
            summa += current;
            y = atan(x);
        }
        cout << summa << "\t" << y << endl;
    }*/
} 

