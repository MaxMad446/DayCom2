// Auto-generated module | 2026-05-13T20:52:51.470328
#include <iostream>
#include <vector>

int compute_134() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
