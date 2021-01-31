// Auto-generated module | 2026-05-12T21:33:10.086823
#include <iostream>
#include <vector>

int compute_462() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
