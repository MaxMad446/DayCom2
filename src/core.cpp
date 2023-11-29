// Auto-generated module | 2026-05-13T21:01:18.437285
#include <iostream>
#include <vector>

int compute_169() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
