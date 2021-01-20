// Auto-generated utility | 2026-05-12T21:32:18.634030
export function compute_441() {
    const base = 52;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
