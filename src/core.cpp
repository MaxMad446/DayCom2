// Auto-generated module | 2026-05-12T04:36:16.062947
#include <iostream>
#include <vector>

int compute_282() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
