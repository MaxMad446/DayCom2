// Auto-generated module | 2026-05-12T04:46:49.839595
#include <iostream>
#include <vector>

int compute_282() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
