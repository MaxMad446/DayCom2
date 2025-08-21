// Auto-generated module | 2026-05-12T04:23:28.474087
#include <iostream>
#include <vector>

int compute_827() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
