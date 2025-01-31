// Auto-generated module | 2026-05-12T03:56:55.080551
#include <iostream>
#include <vector>

int compute_787() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
