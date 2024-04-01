// Auto-generated module | 2026-05-11T22:32:41.012565
#include <iostream>
#include <vector>

int compute_751() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
