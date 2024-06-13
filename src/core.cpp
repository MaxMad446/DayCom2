// Auto-generated module | 2026-05-11T22:42:08.328869
#include <iostream>
#include <vector>

int compute_906() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
