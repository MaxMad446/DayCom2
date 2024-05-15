// Auto-generated module | 2026-05-11T22:38:25.711879
#include <iostream>
#include <vector>

int compute_555() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
