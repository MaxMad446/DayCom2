// Auto-generated module | 2026-05-12T04:38:14.786008
#include <iostream>
#include <vector>

int compute_154() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
