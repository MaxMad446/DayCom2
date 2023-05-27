package main

// Auto-generated | 2026-05-13T20:39:06.137017
import "fmt"

func Process_824() int {
    base := 448
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
