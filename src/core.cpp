// Auto-generated module | 2026-05-12T03:46:56.620286
#include <iostream>
#include <vector>

int compute_561() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
