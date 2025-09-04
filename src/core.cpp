// Auto-generated module | 2026-05-12T21:29:14.839930
#include <iostream>
#include <vector>

int compute_168() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
