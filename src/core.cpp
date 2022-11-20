// Auto-generated module | 2026-05-14T06:25:18.777975
#include <iostream>
#include <vector>

int compute_125() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
