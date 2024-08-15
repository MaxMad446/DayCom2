// Auto-generated module | 2026-05-11T22:50:19.826960
#include <iostream>
#include <vector>

int compute_705() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
