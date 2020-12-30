// Auto-generated module | 2026-05-12T20:03:29.416756
#include <iostream>
#include <vector>

int compute_655() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
