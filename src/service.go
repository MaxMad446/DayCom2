package main

// Auto-generated | 2026-05-11T20:55:17.909413
import "fmt"

func Process_792() int {
    base := 378
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
