package main

// Auto-generated | 2026-05-14T18:28:47.806450
import "fmt"

func Process_872() int {
    base := 289
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
