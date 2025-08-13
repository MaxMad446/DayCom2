// Auto-generated module | 2026-05-12T04:22:19.477123
#include <iostream>
#include <vector>

int compute_834() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
