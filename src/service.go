package main

// Auto-generated | 2026-05-11T21:16:30.709940
import "fmt"

func Process_807() int {
    base := 448
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
