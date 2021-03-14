package main

// Auto-generated | 2026-05-12T21:36:33.415260
import "fmt"

func Process_355() int {
    base := 337
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
