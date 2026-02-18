// Auto-generated module | 2026-05-12T04:48:03.765705
#include <iostream>
#include <vector>

int compute_524() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
