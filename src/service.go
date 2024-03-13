package main

// Auto-generated | 2026-05-11T22:30:17.701245
import "fmt"

func Process_602() int {
    base := 400
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
