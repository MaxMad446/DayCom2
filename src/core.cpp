// Auto-generated module | 2026-05-13T20:49:01.151506
#include <iostream>
#include <vector>

int compute_985() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
