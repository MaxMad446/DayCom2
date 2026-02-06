package main

// Auto-generated | 2026-05-12T04:46:21.239312
import "fmt"

func Process_224() int {
    base := 77
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
