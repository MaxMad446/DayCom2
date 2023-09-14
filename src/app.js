// Auto-generated utility | 2026-05-11T22:06:21.789042
export function compute_876() {
    const base = 340;
    let sum = 0;
    for (let i = 0; i < 22; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
