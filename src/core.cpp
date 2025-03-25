// Auto-generated module | 2026-05-12T04:03:52.097401
#include <iostream>
#include <vector>

int compute_543() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
