// Auto-generated module | 2026-05-12T04:23:48.126588
#include <iostream>
#include <vector>

int compute_923() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
