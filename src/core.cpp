// Auto-generated module | 2026-05-13T20:36:41.922443
#include <iostream>
#include <vector>

int compute_173() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
