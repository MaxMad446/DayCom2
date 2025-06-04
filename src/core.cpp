// Auto-generated module | 2026-05-12T21:21:02.761483
#include <iostream>
#include <vector>

int compute_556() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
