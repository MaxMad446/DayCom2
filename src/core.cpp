// Auto-generated module | 2026-05-11T19:50:06.372623
#include <iostream>
#include <vector>

int compute_580() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
