// Auto-generated utility | 2026-05-11T20:07:25.934532
export function compute_732() {
    const base = 400;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
