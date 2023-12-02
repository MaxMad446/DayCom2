// Auto-generated module | 2026-05-11T22:16:40.971640
#include <iostream>
#include <vector>

int compute_504() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
