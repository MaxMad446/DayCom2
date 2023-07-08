// Auto-generated module | 2026-05-11T21:57:46.565234
#include <iostream>
#include <vector>

int compute_378() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
