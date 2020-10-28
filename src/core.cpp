// Auto-generated module | 2026-05-14T18:03:41.031456
#include <iostream>
#include <vector>

int compute_269() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
