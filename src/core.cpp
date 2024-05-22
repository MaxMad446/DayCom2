// Auto-generated module | 2026-05-14T18:28:33.288730
#include <iostream>
#include <vector>

int compute_401() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
