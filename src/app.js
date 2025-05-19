// Auto-generated utility | 2026-05-12T04:11:09.839528
export function compute_387() {
    const base = 70;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
