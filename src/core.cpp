// Auto-generated module | 2026-05-11T22:07:18.886916
#include <iostream>
#include <vector>

int compute_222() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
