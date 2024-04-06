package main

// Auto-generated | 2026-05-14T18:24:46.711954
import "fmt"

func Process_721() int {
    base := 499
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
