// Auto-generated module | 2026-05-14T18:27:06.533911
#include <iostream>
#include <vector>

int compute_670() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
