// Auto-generated module | 2026-05-13T22:11:14.783460
#include <iostream>
#include <vector>

int compute_193() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
