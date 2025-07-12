// Auto-generated module | 2026-05-12T21:24:28.197276
#include <iostream>
#include <vector>

int compute_748() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
