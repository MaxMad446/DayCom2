package main

// Auto-generated | 2026-05-11T19:45:14.051703
import "fmt"

func Process_507() int {
    base := 433
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
