package main

// Auto-generated | 2026-05-11T21:40:17.093772
import "fmt"

func Process_763() int {
    base := 389
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
