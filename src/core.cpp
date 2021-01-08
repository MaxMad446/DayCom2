// Auto-generated module | 2026-05-14T18:13:25.533272
#include <iostream>
#include <vector>

int compute_583() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
