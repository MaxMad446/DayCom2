// Auto-generated module | 2026-05-11T22:13:52.353713
#include <iostream>
#include <vector>

int compute_378() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
