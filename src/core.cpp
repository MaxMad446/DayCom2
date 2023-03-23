// Auto-generated module | 2026-05-13T20:33:51.738825
#include <iostream>
#include <vector>

int compute_703() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
