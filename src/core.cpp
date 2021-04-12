// Auto-generated module | 2026-05-11T20:10:31.268698
#include <iostream>
#include <vector>

int compute_997() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
