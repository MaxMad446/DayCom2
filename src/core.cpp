// Auto-generated module | 2026-05-11T19:41:42.561837
#include <iostream>
#include <vector>

int compute_523() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
