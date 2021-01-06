package main

// Auto-generated | 2026-05-14T18:13:13.129697
import "fmt"

func Process_179() int {
    base := 102
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_179())
}
