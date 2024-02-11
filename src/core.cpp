// Auto-generated module | 2026-05-14T18:20:30.174836
#include <iostream>
#include <vector>

int compute_746() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
