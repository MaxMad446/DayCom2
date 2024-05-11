// Auto-generated module | 2026-05-14T18:27:45.592922
#include <iostream>
#include <vector>

int compute_357() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
