package main

// Auto-generated | 2026-05-12T21:17:39.470480
import "fmt"

func Process_687() int {
    base := 86
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
