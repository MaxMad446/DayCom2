// Auto-generated module | 2026-05-13T22:01:16.071070
#include <iostream>
#include <vector>

int compute_703() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
