// Auto-generated module | 2026-05-12T04:13:16.819422
#include <iostream>
#include <vector>

int compute_703() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
