package main

// Auto-generated | 2026-05-12T21:11:32.732914
import "fmt"

func Process_599() int {
    base := 170
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_599())
}
