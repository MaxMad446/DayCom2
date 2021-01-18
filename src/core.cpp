// Auto-generated module | 2026-05-14T18:14:42.875995
#include <iostream>
#include <vector>

int compute_589() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
