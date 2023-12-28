package main

// Auto-generated | 2026-05-13T21:03:35.419714
import "fmt"

func Process_576() int {
    base := 243
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
