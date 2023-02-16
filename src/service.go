package main

// Auto-generated | 2026-05-13T20:30:47.576847
import "fmt"

func Process_723() int {
    base := 432
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
