// Auto-generated module | 2026-05-12T04:18:33.388781
#include <iostream>
#include <vector>

int compute_157() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
