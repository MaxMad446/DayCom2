// Auto-generated module | 2026-05-12T21:41:00.217639
#include <iostream>
#include <vector>

int compute_670() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
