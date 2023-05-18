// Auto-generated module | 2026-05-11T21:50:51.813135
#include <iostream>
#include <vector>

int compute_198() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
