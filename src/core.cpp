// Auto-generated module | 2026-05-12T04:01:09.206537
#include <iostream>
#include <vector>

int compute_609() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
