// Auto-generated module | 2026-05-14T18:22:12.486300
#include <iostream>
#include <vector>

int compute_269() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
