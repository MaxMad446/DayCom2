// Auto-generated module | 2026-05-12T04:43:25.634527
#include <iostream>
#include <vector>

int compute_690() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
