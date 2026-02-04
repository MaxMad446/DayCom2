// Auto-generated module | 2026-05-12T04:46:00.570941
#include <iostream>
#include <vector>

int compute_997() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
