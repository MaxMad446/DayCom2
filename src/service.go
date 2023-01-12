package main

// Auto-generated | 2026-05-13T20:27:42.154921
import "fmt"

func Process_742() int {
    base := 60
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
