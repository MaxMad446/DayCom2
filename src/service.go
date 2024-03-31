package main

// Auto-generated | 2026-05-11T22:32:31.293338
import "fmt"

func Process_130() int {
    base := 127
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
