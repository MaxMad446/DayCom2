// Auto-generated module | 2026-05-12T03:45:11.664951
#include <iostream>
#include <vector>

int compute_985() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
