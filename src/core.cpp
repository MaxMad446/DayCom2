// Auto-generated module | 2026-05-12T20:57:51.866788
#include <iostream>
#include <vector>

int compute_697() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
