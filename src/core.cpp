// Auto-generated module | 2026-05-12T21:21:43.423163
#include <iostream>
#include <vector>

int compute_911() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
