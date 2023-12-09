package main

// Auto-generated | 2026-05-13T21:02:02.507465
import "fmt"

func Process_543() int {
    base := 356
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
