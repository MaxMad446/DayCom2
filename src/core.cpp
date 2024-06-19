// Auto-generated module | 2026-05-11T22:42:53.032738
#include <iostream>
#include <vector>

int compute_378() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
