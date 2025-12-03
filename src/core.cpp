// Auto-generated module | 2026-05-12T04:37:19.779224
#include <iostream>
#include <vector>

int compute_748() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
