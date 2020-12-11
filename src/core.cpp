// Auto-generated module | 2026-05-11T19:54:49.662756
#include <iostream>
#include <vector>

int compute_993() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
