// Auto-generated module | 2026-05-11T19:32:12.633961
#include <iostream>
#include <vector>

int compute_386() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
