// Auto-generated module | 2026-05-14T18:17:11.521237
#include <iostream>
#include <vector>

int compute_863() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_863() << std::endl;
    return 0;
}
