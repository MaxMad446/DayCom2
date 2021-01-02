// Auto-generated module | 2026-05-11T19:57:46.639180
#include <iostream>
#include <vector>

int compute_378() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
