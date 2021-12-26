package main

// Auto-generated | 2026-05-11T20:44:32.303240
import "fmt"

func Process_893() int {
    base := 166
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
