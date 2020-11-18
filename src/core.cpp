// Auto-generated module | 2026-05-14T18:06:34.601596
#include <iostream>
#include <vector>

int compute_761() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
