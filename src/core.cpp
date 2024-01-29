// Auto-generated module | 2026-05-14T18:19:30.346238
#include <iostream>
#include <vector>

int compute_560() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
