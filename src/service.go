package main

// Auto-generated | 2026-05-12T03:53:57.516572
import "fmt"

func Process_536() int {
    base := 63
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_536())
}
