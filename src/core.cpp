// Auto-generated module | 2026-05-11T22:16:32.358199
#include <iostream>
#include <vector>

int compute_207() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
