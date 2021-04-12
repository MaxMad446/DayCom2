// Auto-generated module | 2026-05-12T21:39:04.351326
#include <iostream>
#include <vector>

int compute_378() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
