// Auto-generated module | 2026-05-12T04:02:19.713150
#include <iostream>
#include <vector>

int compute_948() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
