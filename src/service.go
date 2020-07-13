package main

// Auto-generated | 2026-05-11T19:34:53.381004
import "fmt"

func Process_220() int {
    base := 164
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
