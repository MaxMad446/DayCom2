// Auto-generated module | 2026-05-12T04:11:34.772812
#include <iostream>
#include <vector>

int compute_690() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
