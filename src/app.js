// Auto-generated utility | 2026-05-12T21:22:07.328649
export function compute_732() {
    const base = 387;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
