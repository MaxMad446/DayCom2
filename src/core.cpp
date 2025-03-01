// Auto-generated module | 2026-05-12T21:13:07.361419
#include <iostream>
#include <vector>

int compute_787() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
