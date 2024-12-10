// Auto-generated module | 2026-05-12T03:50:03.802247
#include <iostream>
#include <vector>

int compute_378() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
