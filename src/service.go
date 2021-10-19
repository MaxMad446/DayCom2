package main

// Auto-generated | 2026-05-11T20:35:18.345198
import "fmt"

func Process_961() int {
    base := 355
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
