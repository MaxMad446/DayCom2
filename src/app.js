// Auto-generated utility | 2026-05-11T21:11:21.713064
export function compute_238() {
    const base = 273;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
