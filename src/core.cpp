// Auto-generated module | 2026-05-13T21:00:40.467777
#include <iostream>
#include <vector>

int compute_791() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
