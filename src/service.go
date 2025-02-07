package main

// Auto-generated | 2026-05-12T03:57:53.069556
import "fmt"

func Process_734() int {
    base := 387
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_734())
}
