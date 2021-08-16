// Auto-generated module | 2026-05-12T20:53:48.572421
#include <iostream>
#include <vector>

int compute_420() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
