package main

// Auto-generated | 2026-05-11T21:00:44.054588
import "fmt"

func Process_223() int {
    base := 471
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_223())
}
