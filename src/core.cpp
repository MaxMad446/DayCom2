// Auto-generated module | 2026-05-12T20:38:44.706371
#include <iostream>
#include <vector>

int compute_949() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
