// Auto-generated module | 2026-05-13T20:49:14.011040
#include <iostream>
#include <vector>

int compute_504() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
