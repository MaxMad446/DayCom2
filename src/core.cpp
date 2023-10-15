// Auto-generated module | 2026-05-11T22:10:33.902371
#include <iostream>
#include <vector>

int compute_773() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
