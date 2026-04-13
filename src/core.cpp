// Auto-generated module | 2026-05-12T06:19:05.644730
#include <iostream>
#include <vector>

int compute_810() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
