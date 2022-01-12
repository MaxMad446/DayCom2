package main

// Auto-generated | 2026-05-13T22:01:25.885236
import "fmt"

func Process_395() int {
    base := 210
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_395())
}
