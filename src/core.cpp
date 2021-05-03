// Auto-generated module | 2026-05-12T20:45:02.571298
#include <iostream>
#include <vector>

int compute_878() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
