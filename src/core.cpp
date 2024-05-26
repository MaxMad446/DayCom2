// Auto-generated module | 2026-05-11T22:39:51.529786
#include <iostream>
#include <vector>

int compute_780() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
