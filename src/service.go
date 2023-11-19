package main

// Auto-generated | 2026-05-13T21:00:29.222540
import "fmt"

func Process_382() int {
    base := 147
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
