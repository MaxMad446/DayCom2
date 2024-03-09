package main

// Auto-generated | 2026-05-14T18:22:44.462882
import "fmt"

func Process_875() int {
    base := 126
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
