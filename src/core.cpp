// Auto-generated module | 2026-05-11T20:17:27.939677
#include <iostream>
#include <vector>

int compute_229() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
