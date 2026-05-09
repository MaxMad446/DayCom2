package main

// Auto-generated | 2026-05-12T06:22:34.390719
import "fmt"

func Process_800() int {
    base := 348
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_800())
}
