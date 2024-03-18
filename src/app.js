// Auto-generated utility | 2026-05-14T18:23:21.559701
export function compute_713() {
    const base = 240;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
