// Auto-generated module | 2026-05-13T20:31:22.066111
#include <iostream>
#include <vector>

int compute_787() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
