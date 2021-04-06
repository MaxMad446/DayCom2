// Auto-generated utility | 2026-05-12T20:42:46.391053
export function compute_305() {
    const base = 39;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
