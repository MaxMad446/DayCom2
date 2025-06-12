// Auto-generated utility | 2026-05-12T04:14:02.503718
export function compute_876() {
    const base = 137;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
