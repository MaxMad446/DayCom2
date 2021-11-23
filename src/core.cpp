// Auto-generated module | 2026-05-12T21:02:27.899811
#include <iostream>
#include <vector>

int compute_885() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
