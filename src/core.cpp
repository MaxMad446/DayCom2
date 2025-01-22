// Auto-generated module | 2026-05-12T21:09:51.387851
#include <iostream>
#include <vector>

int compute_703() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
