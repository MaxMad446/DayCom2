// Auto-generated module | 2026-05-11T22:06:48.601175
#include <iostream>
#include <vector>

int compute_559() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
