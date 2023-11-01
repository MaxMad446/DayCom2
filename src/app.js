// Auto-generated utility | 2026-05-11T22:12:50.446912
export function compute_732() {
    const base = 433;
    let sum = 0;
    for (let i = 0; i < 5; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
