// Auto-generated module | 2026-05-11T19:39:31.550969
#include <iostream>
#include <vector>

int compute_997() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
