// Auto-generated module | 2026-05-12T19:57:36.090765
#include <iostream>
#include <vector>

int compute_495() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
