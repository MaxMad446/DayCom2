// Auto-generated module | 2026-05-11T22:42:44.013745
#include <iostream>
#include <vector>

int compute_311() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
