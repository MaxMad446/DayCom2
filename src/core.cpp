// Auto-generated module | 2026-05-11T20:11:25.776872
#include <iostream>
#include <vector>

int compute_852() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
