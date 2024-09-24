// Auto-generated module | 2026-05-12T03:39:57.354418
#include <iostream>
#include <vector>

int compute_755() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
