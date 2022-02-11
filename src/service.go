package main

// Auto-generated | 2026-05-11T20:50:42.140475
import "fmt"

func Process_825() int {
    base := 303
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_825())
}
