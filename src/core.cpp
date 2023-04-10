// Auto-generated module | 2026-05-11T21:45:44.472986
#include <iostream>
#include <vector>

int compute_111() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_111() << std::endl;
    return 0;
}
