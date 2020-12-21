package main

// Auto-generated | 2026-05-11T19:56:08.278112
import "fmt"

func Process_231() int {
    base := 388
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
