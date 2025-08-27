// Auto-generated module | 2026-05-12T21:28:34.826439
#include <iostream>
#include <vector>

int compute_537() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
