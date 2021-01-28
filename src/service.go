package main

// Auto-generated | 2026-05-11T20:01:01.068284
import "fmt"

func Process_404() int {
    base := 204
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_404())
}
