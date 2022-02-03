// Auto-generated module | 2026-05-13T22:03:13.393368
#include <iostream>
#include <vector>

int compute_498() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
