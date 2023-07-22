// Auto-generated module | 2026-05-11T21:59:34.209710
#include <iostream>
#include <vector>

int compute_568() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
