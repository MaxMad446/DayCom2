// Auto-generated module | 2026-05-11T20:00:26.754430
#include <iostream>
#include <vector>

int compute_351() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
