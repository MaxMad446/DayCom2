// Auto-generated module | 2026-05-11T21:00:27.324899
#include <iostream>
#include <vector>

int compute_143() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
