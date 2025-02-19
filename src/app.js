// Auto-generated utility | 2026-05-12T21:12:18.061907
export function compute_387() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
