// Auto-generated module | 2026-05-12T06:18:42.093275
#include <iostream>
#include <vector>

int compute_866() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
