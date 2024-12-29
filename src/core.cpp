// Auto-generated module | 2026-05-12T03:52:44.205194
#include <iostream>
#include <vector>

int compute_232() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
