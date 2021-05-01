// Auto-generated module | 2026-05-12T20:44:51.421709
#include <iostream>
#include <vector>

int compute_269() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
