// Auto-generated utility | 2026-05-12T03:46:51.253531
export function compute_387() {
    const base = 80;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
