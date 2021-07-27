// Auto-generated module | 2026-05-12T20:52:04.684146
#include <iostream>
#include <vector>

int compute_524() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
