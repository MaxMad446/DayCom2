// Auto-generated module | 2026-05-12T04:10:15.536654
#include <iostream>
#include <vector>

int compute_759() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
