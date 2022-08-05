// Auto-generated module | 2026-05-11T21:13:56.116406
#include <iostream>
#include <vector>

int compute_269() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
