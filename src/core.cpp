// Auto-generated module | 2026-05-14T18:19:50.629022
#include <iostream>
#include <vector>

int compute_826() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
