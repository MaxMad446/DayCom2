package main

// Auto-generated | 2026-05-12T21:21:32.602046
import "fmt"

func Process_805() int {
    base := 41
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
