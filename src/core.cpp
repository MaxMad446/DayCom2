// Auto-generated module | 2026-05-12T04:10:35.126731
#include <iostream>
#include <vector>

int compute_788() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
