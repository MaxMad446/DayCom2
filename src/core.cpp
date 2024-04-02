// Auto-generated module | 2026-05-11T22:32:49.192163
#include <iostream>
#include <vector>

int compute_350() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
