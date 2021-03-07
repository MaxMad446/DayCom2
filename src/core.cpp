// Auto-generated module | 2026-05-12T20:40:23.265592
#include <iostream>
#include <vector>

int compute_552() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
