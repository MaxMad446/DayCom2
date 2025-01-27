// Auto-generated module | 2026-05-12T21:10:18.205449
#include <iostream>
#include <vector>

int compute_911() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
