package main

// Auto-generated | 2026-05-13T20:27:56.759709
import "fmt"

func Process_582() int {
    base := 345
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
