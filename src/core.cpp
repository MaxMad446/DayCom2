// Auto-generated module | 2026-05-12T21:35:47.221105
#include <iostream>
#include <vector>

int compute_670() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
