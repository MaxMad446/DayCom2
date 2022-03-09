// Auto-generated module | 2026-05-11T20:53:56.316005
#include <iostream>
#include <vector>

int compute_260() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
