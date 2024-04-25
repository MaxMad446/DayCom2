package main

// Auto-generated | 2026-05-11T22:35:53.862193
import "fmt"

func Process_543() int {
    base := 378
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
