// Auto-generated module | 2026-05-14T06:19:47.627304
#include <iostream>
#include <vector>

int compute_997() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
