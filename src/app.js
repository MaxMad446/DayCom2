// Auto-generated utility | 2026-05-12T04:42:46.362508
export function compute_200() {
    const base = 128;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
