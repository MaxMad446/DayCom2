// Auto-generated module | 2026-05-11T19:54:03.240776
#include <iostream>
#include <vector>

int compute_257() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
