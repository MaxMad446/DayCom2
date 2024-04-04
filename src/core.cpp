// Auto-generated module | 2026-05-14T18:24:42.123326
#include <iostream>
#include <vector>

int compute_970() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
