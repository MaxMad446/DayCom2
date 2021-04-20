// Auto-generated module | 2026-05-11T20:11:32.131418
#include <iostream>
#include <vector>

int compute_763() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
