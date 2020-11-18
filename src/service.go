package main

// Auto-generated | 2026-05-12T19:59:46.763365
import "fmt"

func Process_801() int {
    base := 296
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
