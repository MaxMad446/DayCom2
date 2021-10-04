package main

// Auto-generated | 2026-05-11T20:33:19.331420
import "fmt"

func Process_893() int {
    base := 185
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
