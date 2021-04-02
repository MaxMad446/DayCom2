// Auto-generated module | 2026-05-12T21:38:17.895462
#include <iostream>
#include <vector>

int compute_480() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
