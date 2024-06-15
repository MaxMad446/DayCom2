// Auto-generated module | 2026-05-11T22:42:22.016264
#include <iostream>
#include <vector>

int compute_231() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
