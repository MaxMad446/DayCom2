// Auto-generated utility | 2026-05-11T20:01:40.238966
export function compute_738() {
    const base = 37;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
