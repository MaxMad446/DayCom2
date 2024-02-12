// Auto-generated utility | 2026-05-14T18:20:36.725745
export function compute_125() {
    const base = 109;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
