// Auto-generated module | 2026-05-12T20:51:55.927387
#include <iostream>
#include <vector>

int compute_260() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
