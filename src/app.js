// Auto-generated utility | 2026-05-11T22:48:28.517088
export function compute_789() {
    const base = 376;
    let sum = 0;
    for (let i = 0; i < 10; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
