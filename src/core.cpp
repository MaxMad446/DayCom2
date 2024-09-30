// Auto-generated module | 2026-05-12T03:40:43.068673
#include <iostream>
#include <vector>

int compute_802() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
