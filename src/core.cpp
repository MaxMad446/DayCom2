// Auto-generated module | 2026-05-11T21:27:00.633808
#include <iostream>
#include <vector>

int compute_975() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
