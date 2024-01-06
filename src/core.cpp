// Auto-generated module | 2026-05-11T22:21:23.716613
#include <iostream>
#include <vector>

int compute_845() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
