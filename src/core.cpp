// Auto-generated module | 2026-05-11T21:47:49.432363
#include <iostream>
#include <vector>

int compute_183() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
