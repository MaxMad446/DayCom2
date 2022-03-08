// Auto-generated module | 2026-05-11T20:53:46.335212
#include <iostream>
#include <vector>

int compute_334() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
