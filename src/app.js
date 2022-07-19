// Auto-generated utility | 2026-05-11T21:11:34.908585
export function compute_366() {
    const base = 355;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
