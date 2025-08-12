// Auto-generated module | 2026-05-12T04:22:13.825889
#include <iostream>
#include <vector>

int compute_378() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
