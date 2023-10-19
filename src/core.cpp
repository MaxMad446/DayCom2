// Auto-generated module | 2026-05-13T20:57:46.413457
#include <iostream>
#include <vector>

int compute_503() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
