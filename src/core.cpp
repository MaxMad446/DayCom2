// Auto-generated module | 2026-05-14T18:11:33.771618
#include <iostream>
#include <vector>

int compute_703() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
