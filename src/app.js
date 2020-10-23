// Auto-generated utility | 2026-05-11T19:48:19.506164
export function compute_800() {
    const base = 414;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
