// Auto-generated module | 2026-05-14T06:24:45.695614
#include <iostream>
#include <vector>

int compute_759() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
