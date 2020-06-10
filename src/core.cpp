// Auto-generated module | 2026-05-11T19:30:28.608850
#include <iostream>
#include <vector>

int compute_942() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
