// Auto-generated module | 2026-05-12T21:26:39.812781
#include <iostream>
#include <vector>

int compute_802() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
