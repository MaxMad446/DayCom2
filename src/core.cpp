// Auto-generated module | 2026-05-12T04:30:17.028364
#include <iostream>
#include <vector>

int compute_746() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
