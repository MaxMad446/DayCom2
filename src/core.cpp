// Auto-generated module | 2026-05-11T20:02:04.403263
#include <iostream>
#include <vector>

int compute_295() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
