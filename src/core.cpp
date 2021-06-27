// Auto-generated module | 2026-05-12T20:49:42.290130
#include <iostream>
#include <vector>

int compute_589() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
