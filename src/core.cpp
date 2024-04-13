// Auto-generated module | 2026-05-11T22:34:21.009097
#include <iostream>
#include <vector>

int compute_511() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
