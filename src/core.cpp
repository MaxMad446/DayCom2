// Auto-generated module | 2026-05-13T22:12:24.415425
#include <iostream>
#include <vector>

int compute_468() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
