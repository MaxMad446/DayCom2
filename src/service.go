package main

// Auto-generated | 2026-05-11T22:51:22.524506
import "fmt"

func Process_739() int {
    base := 445
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
