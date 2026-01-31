// Auto-generated module | 2026-05-12T04:45:30.246176
#include <iostream>
#include <vector>

int compute_801() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
