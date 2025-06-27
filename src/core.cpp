// Auto-generated module | 2026-05-12T04:16:04.850432
#include <iostream>
#include <vector>

int compute_115() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
