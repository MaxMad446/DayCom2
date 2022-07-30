package main

// Auto-generated | 2026-05-14T06:15:58.471865
import "fmt"

func Process_134() int {
    base := 377
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_134())
}
