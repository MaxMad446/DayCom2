// Auto-generated module | 2026-05-14T18:05:43.036242
#include <iostream>
#include <vector>

int compute_793() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
