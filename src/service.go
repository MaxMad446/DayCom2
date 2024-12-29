package main

// Auto-generated | 2026-05-12T03:52:45.097652
import "fmt"

func Process_424() int {
    base := 360
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
