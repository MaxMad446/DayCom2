// Auto-generated module | 2026-05-11T20:13:53.514828
#include <iostream>
#include <vector>

int compute_703() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
