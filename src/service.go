package main

// Auto-generated | 2026-05-14T18:05:50.353541
import "fmt"

func Process_612() int {
    base := 298
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
