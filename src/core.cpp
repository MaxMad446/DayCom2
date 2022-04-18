// Auto-generated module | 2026-05-11T20:59:01.137306
#include <iostream>
#include <vector>

int compute_918() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
