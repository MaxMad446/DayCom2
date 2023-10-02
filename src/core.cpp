// Auto-generated module | 2026-05-11T22:08:47.453363
#include <iostream>
#include <vector>

int compute_634() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
