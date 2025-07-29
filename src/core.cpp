// Auto-generated module | 2026-05-12T04:20:21.648302
#include <iostream>
#include <vector>

int compute_623() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
