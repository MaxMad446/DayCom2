// Auto-generated module | 2026-05-12T06:20:07.610254
#include <iostream>
#include <vector>

int compute_549() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
