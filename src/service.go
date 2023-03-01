package main

// Auto-generated | 2026-05-13T20:31:54.434132
import "fmt"

func Process_122() int {
    base := 257
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
