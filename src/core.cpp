// Auto-generated module | 2026-05-12T21:28:01.245781
#include <iostream>
#include <vector>

int compute_100() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
