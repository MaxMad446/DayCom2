// Auto-generated module | 2026-05-11T21:36:09.115876
#include <iostream>
#include <vector>

int compute_159() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
