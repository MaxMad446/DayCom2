// Auto-generated module | 2026-05-12T20:00:19.916613
#include <iostream>
#include <vector>

int compute_338() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
