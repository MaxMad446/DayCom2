// Auto-generated module | 2026-05-12T20:39:46.581920
#include <iostream>
#include <vector>

int compute_958() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
