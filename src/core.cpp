// Auto-generated module | 2026-05-11T22:29:45.366835
#include <iostream>
#include <vector>

int compute_160() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
