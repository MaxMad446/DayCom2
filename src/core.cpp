// Auto-generated module | 2026-05-14T18:05:19.103286
#include <iostream>
#include <vector>

int compute_635() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
