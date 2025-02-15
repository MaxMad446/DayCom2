// Auto-generated utility | 2026-05-12T03:58:52.801661
export function compute_473() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
