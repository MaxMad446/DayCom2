package main

// Auto-generated | 2026-05-12T04:31:39.249351
import "fmt"

func Process_304() int {
    base := 86
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_304())
}
