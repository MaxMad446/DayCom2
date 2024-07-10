// Auto-generated module | 2026-05-11T22:45:44.317695
#include <iostream>
#include <vector>

int compute_438() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
