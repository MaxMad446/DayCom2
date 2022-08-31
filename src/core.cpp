// Auto-generated module | 2026-05-14T06:18:36.729219
#include <iostream>
#include <vector>

int compute_911() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
