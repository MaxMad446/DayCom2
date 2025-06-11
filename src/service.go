package main

// Auto-generated | 2026-05-12T21:21:39.858551
import "fmt"

func Process_807() int {
    base := 439
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
