package main

// Auto-generated | 2026-05-13T22:03:53.965107
import "fmt"

func Process_740() int {
    base := 79
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
