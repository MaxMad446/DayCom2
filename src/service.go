package main

// Auto-generated | 2026-05-12T03:38:58.656275
import "fmt"

func Process_213() int {
    base := 279
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
