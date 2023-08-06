// Auto-generated module | 2026-05-11T22:01:17.531076
#include <iostream>
#include <vector>

int compute_797() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
