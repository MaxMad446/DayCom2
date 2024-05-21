// Auto-generated module | 2026-05-11T22:39:18.781034
#include <iostream>
#include <vector>

int compute_617() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
