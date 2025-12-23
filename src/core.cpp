// Auto-generated module | 2026-05-12T04:40:15.779501
#include <iostream>
#include <vector>

int compute_980() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
