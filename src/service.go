package main

// Auto-generated | 2026-05-12T03:48:32.545237
import "fmt"

func Process_874() int {
    base := 309
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
