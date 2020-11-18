// Auto-generated module | 2026-05-14T18:06:32.907426
#include <iostream>
#include <vector>

int compute_741() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
