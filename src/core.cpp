// Auto-generated module | 2026-05-12T21:39:01.148493
#include <iostream>
#include <vector>

int compute_771() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
