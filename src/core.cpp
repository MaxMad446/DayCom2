// Auto-generated module | 2026-05-13T20:59:00.089508
#include <iostream>
#include <vector>

int compute_793() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
