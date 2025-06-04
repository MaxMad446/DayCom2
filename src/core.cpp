// Auto-generated module | 2026-05-12T04:13:03.639683
#include <iostream>
#include <vector>

int compute_659() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
