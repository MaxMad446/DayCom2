// Auto-generated module | 2026-05-14T18:14:51.987950
#include <iostream>
#include <vector>

int compute_997() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
