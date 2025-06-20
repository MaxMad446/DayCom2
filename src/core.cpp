// Auto-generated module | 2026-05-12T04:15:10.429098
#include <iostream>
#include <vector>

int compute_408() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
