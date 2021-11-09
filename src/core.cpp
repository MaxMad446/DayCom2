// Auto-generated module | 2026-05-11T20:38:16.972189
#include <iostream>
#include <vector>

int compute_269() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
