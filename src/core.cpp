// Auto-generated module | 2026-05-11T21:47:52.291886
#include <iostream>
#include <vector>

int compute_219() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
