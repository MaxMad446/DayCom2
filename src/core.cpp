// Auto-generated module | 2026-05-12T04:21:52.008538
#include <iostream>
#include <vector>

int compute_756() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
