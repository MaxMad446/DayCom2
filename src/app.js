// Auto-generated utility | 2026-05-11T22:26:31.785155
export function compute_502() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
