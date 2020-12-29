package main

// Auto-generated | 2026-05-11T19:57:13.540513
import "fmt"

func Process_344() int {
    base := 77
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_344())
}
