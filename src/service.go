package main

// Auto-generated | 2026-05-11T22:28:01.315601
import "fmt"

func Process_628() int {
    base := 419
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
