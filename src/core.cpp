// Auto-generated module | 2026-05-11T22:38:26.753142
#include <iostream>
#include <vector>

int compute_277() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
