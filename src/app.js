// Auto-generated utility | 2026-05-11T19:25:50.849063
export function compute_709() {
    const base = 417;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
