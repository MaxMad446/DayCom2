// Auto-generated module | 2026-05-13T20:56:46.697867
#include <iostream>
#include <vector>

int compute_962() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
