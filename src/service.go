package main

// Auto-generated | 2026-05-13T20:29:42.799118
import "fmt"

func Process_800() int {
    base := 489
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_800())
}
