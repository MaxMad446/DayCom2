// Auto-generated module | 2026-05-14T18:13:18.886584
#include <iostream>
#include <vector>

int compute_827() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
