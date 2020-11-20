// Auto-generated module | 2026-05-12T19:59:55.150845
#include <iostream>
#include <vector>

int compute_824() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
