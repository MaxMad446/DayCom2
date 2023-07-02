// Auto-generated module | 2026-05-11T21:56:48.351315
#include <iostream>
#include <vector>

int compute_350() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
