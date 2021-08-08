package main

// Auto-generated | 2026-05-12T20:53:02.996409
import "fmt"

func Process_353() int {
    base := 454
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
