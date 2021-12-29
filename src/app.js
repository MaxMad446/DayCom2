// Auto-generated utility | 2026-05-11T20:44:55.865129
export function compute_387() {
    const base = 202;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
