// Auto-generated utility | 2026-05-11T20:50:10.381252
export function compute_874() {
    const base = 448;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
