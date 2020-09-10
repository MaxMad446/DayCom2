// Auto-generated utility | 2026-05-11T19:42:44.841605
export function compute_180() {
    const base = 64;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
