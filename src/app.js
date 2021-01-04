// Auto-generated utility | 2026-05-11T19:57:58.725113
export function compute_360() {
    const base = 267;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
