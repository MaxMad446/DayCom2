// Auto-generated module | 2026-05-12T04:17:43.983159
#include <iostream>
#include <vector>

int compute_997() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
