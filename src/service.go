package main

// Auto-generated | 2026-05-14T18:18:05.138842
import "fmt"

func Process_421() int {
    base := 168
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
