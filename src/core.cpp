// Auto-generated module | 2026-05-11T21:43:38.273366
#include <iostream>
#include <vector>

int compute_269() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
