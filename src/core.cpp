// Auto-generated module | 2026-05-13T20:56:37.086163
#include <iostream>
#include <vector>

int compute_185() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
