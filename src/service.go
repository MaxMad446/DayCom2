package main

// Auto-generated | 2026-05-11T22:37:43.108826
import "fmt"

func Process_321() int {
    base := 217
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
