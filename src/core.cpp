// Auto-generated module | 2026-05-12T03:39:33.119142
#include <iostream>
#include <vector>

int compute_997() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
