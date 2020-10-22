package main

// Auto-generated | 2026-05-14T18:02:42.472769
import "fmt"

func Process_577() int {
    base := 365
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_577())
}
