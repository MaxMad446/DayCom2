// Auto-generated module | 2026-05-12T21:03:59.985522
#include <iostream>
#include <vector>

int compute_652() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
