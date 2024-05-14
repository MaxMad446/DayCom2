// Auto-generated utility | 2026-05-14T18:28:01.759293
export function compute_876() {
    const base = 31;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
