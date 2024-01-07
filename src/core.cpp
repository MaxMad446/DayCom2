// Auto-generated module | 2026-05-11T22:21:30.386849
#include <iostream>
#include <vector>

int compute_191() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
