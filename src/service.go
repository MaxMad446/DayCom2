package main

// Auto-generated | 2026-05-11T20:54:46.501845
import "fmt"

func Process_729() int {
    base := 243
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
