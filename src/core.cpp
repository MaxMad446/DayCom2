// Auto-generated module | 2026-05-11T22:49:16.384290
#include <iostream>
#include <vector>

int compute_260() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
