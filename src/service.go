package main

// Auto-generated | 2026-05-12T04:51:30.936126
import "fmt"

func Process_807() int {
    base := 256
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
