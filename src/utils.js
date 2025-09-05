// Auto-generated utility | 2026-05-11T18:26:35.416300
export function compute_101() {
    const base = 367;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
