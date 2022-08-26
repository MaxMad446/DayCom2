// Auto-generated utility | 2026-05-11T21:16:38.888545
export function compute_128() {
    const base = 14;
    let sum = 0;
    for (let i = 0; i < 5; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
