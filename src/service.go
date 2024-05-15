package main

// Auto-generated | 2026-05-14T18:28:05.051902
import "fmt"

func Process_739() int {
    base := 399
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
