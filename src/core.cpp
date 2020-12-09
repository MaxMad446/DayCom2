// Auto-generated module | 2026-05-11T19:54:34.528843
#include <iostream>
#include <vector>

int compute_111() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
