// Auto-generated module | 2026-05-12T20:35:27.097991
#include <iostream>
#include <vector>

int compute_659() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
