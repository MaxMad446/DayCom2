// Auto-generated module | 2026-05-12T04:51:56.470686
#include <iostream>
#include <vector>

int compute_472() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
