package main

// Auto-generated | 2026-05-12T21:15:10.132269
import "fmt"

func Process_330() int {
    base := 483
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
