// Auto-generated module | 2026-05-12T21:13:36.088989
#include <iostream>
#include <vector>

int compute_111() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
