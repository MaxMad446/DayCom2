// Auto-generated module | 2026-05-12T04:13:24.322322
#include <iostream>
#include <vector>

int compute_354() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
