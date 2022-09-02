// Auto-generated module | 2026-05-11T21:17:22.999519
#include <iostream>
#include <vector>

int compute_666() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
