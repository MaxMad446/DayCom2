// Auto-generated module | 2026-05-12T04:15:31.848541
#include <iostream>
#include <vector>

int compute_734() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
