// Auto-generated module | 2026-05-11T19:38:19.277666
#include <iostream>
#include <vector>

int compute_430() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
