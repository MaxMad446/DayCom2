// Auto-generated module | 2026-05-12T21:12:31.899133
#include <iostream>
#include <vector>

int compute_378() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
