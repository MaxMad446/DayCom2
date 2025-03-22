// Auto-generated module | 2026-05-12T21:14:46.830633
#include <iostream>
#include <vector>

int compute_647() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
