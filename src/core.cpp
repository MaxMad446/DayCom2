// Auto-generated module | 2026-05-13T20:53:56.603095
#include <iostream>
#include <vector>

int compute_130() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
