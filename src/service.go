package main

// Auto-generated | 2026-05-12T20:54:21.722110
import "fmt"

func Process_650() int {
    base := 388
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
