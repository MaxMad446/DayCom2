// Auto-generated module | 2026-05-13T22:09:17.192281
#include <iostream>
#include <vector>

int compute_803() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
