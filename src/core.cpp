// Auto-generated module | 2026-05-11T22:47:06.246332
#include <iostream>
#include <vector>

int compute_120() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
