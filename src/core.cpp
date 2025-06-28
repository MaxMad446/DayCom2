// Auto-generated module | 2026-05-12T21:23:10.815723
#include <iostream>
#include <vector>

int compute_358() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
