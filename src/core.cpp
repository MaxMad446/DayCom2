// Auto-generated module | 2026-05-12T06:19:31.569447
#include <iostream>
#include <vector>

int compute_604() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
