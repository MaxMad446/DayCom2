// Auto-generated module | 2026-05-11T22:02:02.496050
#include <iostream>
#include <vector>

int compute_320() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
