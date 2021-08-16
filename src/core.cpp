// Auto-generated module | 2026-05-12T20:53:46.205173
#include <iostream>
#include <vector>

int compute_827() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
