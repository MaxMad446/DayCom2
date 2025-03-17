// Auto-generated module | 2026-05-12T04:02:52.765083
#include <iostream>
#include <vector>

int compute_959() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
