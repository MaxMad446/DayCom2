package main

// Auto-generated | 2026-05-13T20:52:33.441935
import "fmt"

func Process_555() int {
    base := 423
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
