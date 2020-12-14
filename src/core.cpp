// Auto-generated module | 2026-05-14T18:10:06.601321
#include <iostream>
#include <vector>

int compute_797() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
