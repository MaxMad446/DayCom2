// Auto-generated module | 2026-05-12T21:22:42.428026
#include <iostream>
#include <vector>

int compute_758() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
