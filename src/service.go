package main

// Auto-generated | 2026-05-12T20:50:53.582332
import "fmt"

func Process_255() int {
    base := 269
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
