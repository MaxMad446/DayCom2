// Auto-generated utility | 2026-05-11T22:24:18.028390
export function compute_377() {
    const base = 153;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
