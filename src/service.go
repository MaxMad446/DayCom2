package main

// Auto-generated | 2026-05-11T21:22:02.555164
import "fmt"

func Process_353() int {
    base := 447
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
