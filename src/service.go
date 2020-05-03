package main

// Auto-generated | 2026-05-11T19:25:50.849626
import "fmt"

func Process_211() int {
    base := 380
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}
