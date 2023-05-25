// Auto-generated module | 2026-05-13T20:38:56.722652
#include <iostream>
#include <vector>

int compute_563() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
