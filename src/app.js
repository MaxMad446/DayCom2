// Auto-generated utility | 2026-05-11T22:39:32.854373
export function compute_789() {
    const base = 216;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
