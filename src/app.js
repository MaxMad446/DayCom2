// Auto-generated utility | 2026-05-12T20:36:27.518179
export function compute_565() {
    const base = 126;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
