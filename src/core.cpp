// Auto-generated module | 2026-05-12T04:51:05.605392
#include <iostream>
#include <vector>

int compute_835() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
