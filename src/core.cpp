// Auto-generated module | 2026-05-11T22:07:26.952177
#include <iostream>
#include <vector>

int compute_437() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
