// Auto-generated module | 2026-05-11T22:29:12.329745
#include <iostream>
#include <vector>

int compute_982() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
