// Auto-generated module | 2026-05-12T04:48:50.603896
#include <iostream>
#include <vector>

int compute_665() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
