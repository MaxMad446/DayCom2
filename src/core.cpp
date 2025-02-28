// Auto-generated module | 2026-05-12T04:00:47.579492
#include <iostream>
#include <vector>

int compute_463() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
