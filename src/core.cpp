// Auto-generated module | 2026-05-12T21:25:04.637566
#include <iostream>
#include <vector>

int compute_260() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
