// Auto-generated module | 2026-05-13T22:10:37.723855
#include <iostream>
#include <vector>

int compute_111() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
