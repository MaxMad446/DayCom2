// Auto-generated module | 2026-05-12T04:17:40.096355
#include <iostream>
#include <vector>

int compute_997() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
