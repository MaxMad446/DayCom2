// Auto-generated module | 2026-05-12T03:43:11.620299
#include <iostream>
#include <vector>

int compute_718() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
