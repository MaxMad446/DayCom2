// Auto-generated module | 2026-05-14T18:13:45.289350
#include <iostream>
#include <vector>

int compute_994() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
