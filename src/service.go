package main

// Auto-generated | 2026-05-11T22:36:45.946055
import "fmt"

func Process_522() int {
    base := 413
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
