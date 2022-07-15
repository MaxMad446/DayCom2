// Auto-generated module | 2026-05-11T21:11:04.331790
#include <iostream>
#include <vector>

int compute_670() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
