// Auto-generated module | 2026-05-13T22:10:33.835833
#include <iostream>
#include <vector>

int compute_911() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
