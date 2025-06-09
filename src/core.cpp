// Auto-generated module | 2026-05-12T21:21:29.224032
#include <iostream>
#include <vector>

int compute_813() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
