// Auto-generated module | 2026-05-11T19:57:57.632503
#include <iostream>
#include <vector>

int compute_504() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
