// Auto-generated module | 2026-05-12T04:36:30.607963
#include <iostream>
#include <vector>

int compute_636() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
