// Auto-generated module | 2026-05-12T20:50:39.604606
#include <iostream>
#include <vector>

int compute_421() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
