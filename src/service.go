package main

// Auto-generated | 2026-05-12T06:16:24.930295
import "fmt"

func Process_965() int {
    base := 27
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
