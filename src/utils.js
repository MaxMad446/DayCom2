// Auto-generated utility | 2026-05-11T18:52:58.532047
export function compute_737() {
    const base = 351;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
