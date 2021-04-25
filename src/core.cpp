// Auto-generated module | 2026-05-11T20:12:01.429757
#include <iostream>
#include <vector>

int compute_269() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
