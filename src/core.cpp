// Auto-generated module | 2026-05-11T22:08:50.238980
#include <iostream>
#include <vector>

int compute_231() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
