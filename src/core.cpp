// Auto-generated module | 2026-05-12T20:49:39.861345
#include <iostream>
#include <vector>

int compute_455() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
