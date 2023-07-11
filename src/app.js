// Auto-generated utility | 2026-05-11T21:58:10.140199
export function compute_802() {
    const base = 386;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
