// Auto-generated module | 2026-05-12T04:23:50.442256
#include <iostream>
#include <vector>

int compute_471() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
