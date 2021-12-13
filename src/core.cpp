// Auto-generated module | 2026-05-12T21:04:03.796790
#include <iostream>
#include <vector>

int compute_997() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
