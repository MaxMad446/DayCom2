// Auto-generated module | 2026-05-12T03:51:55.126879
#include <iostream>
#include <vector>

int compute_704() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
