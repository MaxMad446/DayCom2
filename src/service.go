package main

// Auto-generated | 2026-05-11T22:24:12.017174
import "fmt"

func Process_807() int {
    base := 162
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
