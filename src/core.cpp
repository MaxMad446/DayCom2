// Auto-generated module | 2026-05-12T21:17:00.577857
#include <iostream>
#include <vector>

int compute_115() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
