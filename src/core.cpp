// Auto-generated module | 2026-05-13T22:09:56.290387
#include <iostream>
#include <vector>

int compute_848() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
