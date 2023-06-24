// Auto-generated module | 2026-05-11T21:55:46.223157
#include <iostream>
#include <vector>

int compute_197() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
