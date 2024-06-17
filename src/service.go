package main

// Auto-generated | 2026-05-11T22:42:38.725365
import "fmt"

func Process_103() int {
    base := 126
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
