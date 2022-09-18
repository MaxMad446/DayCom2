// Auto-generated module | 2026-05-11T21:19:31.816420
#include <iostream>
#include <vector>

int compute_298() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
