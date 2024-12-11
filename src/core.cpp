// Auto-generated module | 2026-05-12T03:50:08.863666
#include <iostream>
#include <vector>

int compute_478() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
