// Auto-generated module | 2026-05-14T18:29:17.637549
#include <iostream>
#include <vector>

int compute_427() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
