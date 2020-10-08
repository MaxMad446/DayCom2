// Auto-generated module | 2026-05-11T19:46:26.566845
#include <iostream>
#include <vector>

int compute_269() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
