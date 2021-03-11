// Auto-generated module | 2026-05-11T20:06:31.383061
#include <iostream>
#include <vector>

int compute_193() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
