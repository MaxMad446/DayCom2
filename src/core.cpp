// Auto-generated module | 2026-05-13T20:58:53.489444
#include <iostream>
#include <vector>

int compute_504() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
