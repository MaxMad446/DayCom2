// Auto-generated utility | 2026-05-13T20:57:13.321651
export function compute_213() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
