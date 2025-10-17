// Auto-generated module | 2026-05-12T04:31:11.065736
#include <iostream>
#include <vector>

int compute_725() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
