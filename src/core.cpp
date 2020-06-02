// Auto-generated module | 2026-05-11T19:29:25.615456
#include <iostream>
#include <vector>

int compute_169() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
