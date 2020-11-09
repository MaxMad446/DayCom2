// Auto-generated module | 2026-05-12T19:59:02.925490
#include <iostream>
#include <vector>

int compute_105() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
