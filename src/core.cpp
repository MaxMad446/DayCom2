// Auto-generated module | 2026-05-12T20:44:35.996777
#include <iostream>
#include <vector>

int compute_378() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
