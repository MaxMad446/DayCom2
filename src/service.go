package main

// Auto-generated | 2026-05-11T22:44:28.295361
import "fmt"

func Process_807() int {
    base := 222
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
