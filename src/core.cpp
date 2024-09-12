// Auto-generated module | 2026-05-12T03:38:39.230412
#include <iostream>
#include <vector>

int compute_655() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
