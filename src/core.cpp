// Auto-generated module | 2026-05-12T04:49:06.634451
#include <iostream>
#include <vector>

int compute_334() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
