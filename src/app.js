// Auto-generated utility | 2026-05-13T21:01:19.280292
export function compute_213() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
