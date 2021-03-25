// Auto-generated module | 2026-05-12T20:41:44.617503
#include <iostream>
#include <vector>

int compute_547() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
