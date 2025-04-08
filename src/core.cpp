// Auto-generated module | 2026-05-12T21:16:14.921011
#include <iostream>
#include <vector>

int compute_619() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
