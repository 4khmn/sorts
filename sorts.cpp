#include <random>
#include <iostream>
using namespace std;
int main() {
    random_device random_device; // Источник энтропии.
    mt19937 generator(random_device()); // Генератор случайных чисел.
    // (Здесь берется одно инициализирующее значение, можно брать больше)

    uniform_int_distribution<> distribution(10, 20); // Равномерное распределение [10, 20]

    int x = distribution(generator); // Случайное число.
    cout << x << '\n';
}