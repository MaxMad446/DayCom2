// Auto-generated utility | 2026-05-13T22:07:31.295481
export function compute_725() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
