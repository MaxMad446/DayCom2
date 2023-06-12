// Auto-generated utility | 2026-05-11T21:54:09.883995
export function compute_105() {
    const base = 60;
    let sum = 0;
    for (let i = 0; i < 23; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
