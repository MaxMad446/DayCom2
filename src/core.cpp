// Auto-generated module | 2026-05-14T06:26:40.639416
#include <iostream>
#include <vector>

int compute_614() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
