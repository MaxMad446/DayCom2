// Auto-generated module | 2026-05-14T18:12:31.144115
#include <iostream>
#include <vector>

int compute_803() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
