// Auto-generated module | 2026-05-13T21:01:26.275750
#include <iostream>
#include <vector>

int compute_689() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
