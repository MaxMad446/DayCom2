// Auto-generated module | 2026-05-11T22:35:36.134849
#include <iostream>
#include <vector>

int compute_104() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
