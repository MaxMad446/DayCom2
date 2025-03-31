// Auto-generated module | 2026-05-12T21:15:29.521736
#include <iostream>
#include <vector>

int compute_754() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
