// Auto-generated module | 2026-05-12T04:28:38.194516
#include <iostream>
#include <vector>

int compute_564() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
