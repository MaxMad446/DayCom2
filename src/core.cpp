// Auto-generated module | 2026-05-14T18:28:41.793080
#include <iostream>
#include <vector>

int compute_832() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
