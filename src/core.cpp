// Auto-generated module | 2026-05-12T21:01:17.586560
#include <iostream>
#include <vector>

int compute_773() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
