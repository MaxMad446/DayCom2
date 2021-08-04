package main

// Auto-generated | 2026-05-11T20:25:34.025687
import "fmt"

func Process_809() int {
    base := 489
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
