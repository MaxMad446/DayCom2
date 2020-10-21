// Auto-generated module | 2026-05-14T18:02:39.727090
#include <iostream>
#include <vector>

int compute_985() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
