// Auto-generated module | 2026-05-12T04:15:57.902744
#include <iostream>
#include <vector>

int compute_325() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
