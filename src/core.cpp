// Auto-generated module | 2026-05-12T06:18:53.143868
#include <iostream>
#include <vector>

int compute_787() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
