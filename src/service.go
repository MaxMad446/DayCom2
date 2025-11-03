package main

// Auto-generated | 2026-05-12T04:33:27.027179
import "fmt"

func Process_755() int {
    base := 373
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
