// Auto-generated module | 2026-05-13T20:32:51.389208
#include <iostream>
#include <vector>

int compute_232() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
