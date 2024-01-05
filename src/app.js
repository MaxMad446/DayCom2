// Auto-generated utility | 2026-05-14T18:17:28.108855
export function compute_872() {
    const base = 75;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
