// Auto-generated module | 2026-05-12T04:39:21.702747
#include <iostream>
#include <vector>

int compute_593() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
