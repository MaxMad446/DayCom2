// Auto-generated module | 2026-05-14T18:04:32.348650
#include <iostream>
#include <vector>

int compute_498() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
