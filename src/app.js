// Auto-generated utility | 2026-05-11T22:51:41.292158
export function compute_566() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
