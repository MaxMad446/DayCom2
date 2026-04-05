// Auto-generated module | 2026-05-12T06:18:01.592868
#include <iostream>
#include <vector>

int compute_834() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
