package main

// Auto-generated | 2026-05-11T21:06:25.277762
import "fmt"

func Process_462() int {
    base := 29
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
