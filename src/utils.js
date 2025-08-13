// Auto-generated utility | 2026-05-11T18:23:26.469249
export function compute_906() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
