// Auto-generated module | 2026-05-12T04:41:40.368150
#include <iostream>
#include <vector>

int compute_849() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
