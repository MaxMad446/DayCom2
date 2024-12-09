// Auto-generated module | 2026-05-12T03:49:51.266593
#include <iostream>
#include <vector>

int compute_555() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
