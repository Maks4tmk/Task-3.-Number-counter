// Задача 3. Счётчик чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

class counter
{
public:

    void operator ()(int value) {
        if (value % 3 == 0) {
            sum += value;
            count++;
        }
    }

    int get_sum() {
        return sum;
    }

    int get_count() {
        return count;
    }

private:
    
    int sum;
    int count;

};


int main()
{
    std::vector <int> arr {4, 1, 3, 6, 25, 54};
    std::cout << "[IN]: ";
    for (int n : arr) { std::cout << n << " "; }
    std::cout << std::endl;

    std::cout << "[OUT]: get_sum() = " << std::for_each(arr.begin(), arr.end(), counter()).get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << std::for_each(arr.begin(), arr.end(), counter()).get_count() << std::endl;

}

