// Auto-generated utility | 2026-05-11T22:50:30.277285
export function compute_314() {
    const base = 206;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
