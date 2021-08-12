// Auto-generated module | 2026-05-12T20:53:31.915804
#include <iostream>
#include <vector>

int compute_137() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
