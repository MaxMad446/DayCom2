// Auto-generated module | 2026-05-12T20:35:33.138238
#include <iostream>
#include <vector>

int compute_642() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
