// Auto-generated module | 2026-05-13T20:58:20.632986
#include <iostream>
#include <vector>

int compute_269() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
