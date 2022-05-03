// Auto-generated module | 2026-05-11T21:01:07.229243
#include <iostream>
#include <vector>

int compute_997() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
