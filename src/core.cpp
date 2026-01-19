// Auto-generated module | 2026-05-12T04:43:45.519048
#include <iostream>
#include <vector>

int compute_115() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
