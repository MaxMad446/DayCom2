// Auto-generated utility | 2026-05-11T22:17:09.416636
export function compute_213() {
    const base = 234;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
