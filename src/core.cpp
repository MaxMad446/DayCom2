// Auto-generated module | 2026-05-13T20:29:09.183039
#include <iostream>
#include <vector>

int compute_111() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
