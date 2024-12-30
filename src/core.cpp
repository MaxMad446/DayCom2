// Auto-generated module | 2026-05-12T03:52:52.183193
#include <iostream>
#include <vector>

int compute_703() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
