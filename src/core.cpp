// Auto-generated module | 2026-05-14T06:22:10.356652
#include <iostream>
#include <vector>

int compute_711() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
