// Auto-generated module | 2026-05-14T06:12:05.527631
#include <iostream>
#include <vector>

int compute_494() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
