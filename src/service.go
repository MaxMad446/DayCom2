package main

// Auto-generated | 2026-05-12T06:16:58.278402
import "fmt"

func Process_961() int {
    base := 64
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
