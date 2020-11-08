// Auto-generated module | 2026-05-12T19:58:58.060353
#include <iostream>
#include <vector>

int compute_838() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
