// Auto-generated module | 2026-05-11T20:22:25.213124
#include <iostream>
#include <vector>

int compute_106() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
