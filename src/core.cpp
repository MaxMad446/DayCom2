// Auto-generated module | 2026-05-12T04:39:27.400698
#include <iostream>
#include <vector>

int compute_542() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
