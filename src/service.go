package main

// Auto-generated | 2026-05-11T19:43:03.437637
import "fmt"

func Process_825() int {
    base := 484
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_825())
}
