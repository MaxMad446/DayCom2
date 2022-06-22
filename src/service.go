package main

// Auto-generated | 2026-05-14T06:13:04.712831
import "fmt"

func Process_822() int {
    base := 206
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
