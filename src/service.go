package main

// Auto-generated | 2026-05-12T03:38:43.551925
import "fmt"

func Process_646() int {
    base := 340
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_646())
}
