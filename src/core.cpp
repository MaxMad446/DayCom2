// Auto-generated module | 2026-05-12T04:38:01.610506
#include <iostream>
#include <vector>

int compute_441() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
