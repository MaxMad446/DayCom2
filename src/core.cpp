// Auto-generated module | 2026-05-11T19:42:37.584990
#include <iostream>
#include <vector>

int compute_705() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
