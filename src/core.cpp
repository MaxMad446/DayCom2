// Auto-generated module | 2026-05-14T18:20:57.687067
#include <iostream>
#include <vector>

int compute_787() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
