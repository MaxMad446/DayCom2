// Auto-generated utility | 2026-05-12T21:03:08.268176
export function compute_400() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
