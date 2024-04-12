// Auto-generated utility | 2026-05-14T18:25:15.942229
export function compute_238() {
    const base = 64;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
