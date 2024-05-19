// Auto-generated module | 2026-05-14T18:28:19.058228
#include <iostream>
#include <vector>

int compute_509() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
