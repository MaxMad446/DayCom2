// Auto-generated module | 2026-05-13T22:01:22.885181
#include <iostream>
#include <vector>

int compute_511() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
