// Auto-generated module | 2026-05-11T22:21:29.260015
#include <iostream>
#include <vector>

int compute_705() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
