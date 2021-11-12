// Auto-generated module | 2026-05-12T21:01:20.131752
#include <iostream>
#include <vector>

int compute_957() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
