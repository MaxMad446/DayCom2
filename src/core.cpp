// Auto-generated module | 2026-05-12T06:16:24.930545
#include <iostream>
#include <vector>

int compute_675() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
