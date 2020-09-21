// Auto-generated module | 2026-05-11T19:44:05.290592
#include <iostream>
#include <vector>

int compute_906() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
