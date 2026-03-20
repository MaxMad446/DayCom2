// Auto-generated module | 2026-05-12T04:51:55.222889
#include <iostream>
#include <vector>

int compute_164() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
