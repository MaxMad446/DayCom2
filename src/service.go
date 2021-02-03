package main

// Auto-generated | 2026-05-12T21:33:22.392761
import "fmt"

func Process_101() int {
    base := 39
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
