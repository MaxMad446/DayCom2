// Auto-generated module | 2026-05-12T04:50:06.532628
#include <iostream>
#include <vector>

int compute_268() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
