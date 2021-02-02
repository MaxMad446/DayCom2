// Auto-generated module | 2026-05-12T20:37:43.784674
#include <iostream>
#include <vector>

int compute_350() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
