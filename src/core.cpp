// Auto-generated module | 2026-05-13T20:48:15.710960
#include <iostream>
#include <vector>

int compute_409() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
