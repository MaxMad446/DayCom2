// Auto-generated module | 2026-05-14T18:19:54.767971
#include <iostream>
#include <vector>

int compute_778() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
