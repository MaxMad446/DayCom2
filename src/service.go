package main

// Auto-generated | 2026-05-14T18:19:47.065776
import "fmt"

func Process_822() int {
    base := 400
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
