// Auto-generated module | 2026-05-11T22:24:51.879649
#include <iostream>
#include <vector>

int compute_468() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
