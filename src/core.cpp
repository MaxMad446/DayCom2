// Auto-generated module | 2026-05-13T20:29:12.571604
#include <iostream>
#include <vector>

int compute_647() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
