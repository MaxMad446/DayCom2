// Auto-generated utility | 2026-05-11T21:04:16.493709
export function compute_314() {
    const base = 12;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
