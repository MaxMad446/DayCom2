package main

// Auto-generated | 2026-05-13T22:10:50.819498
import "fmt"

func Process_241() int {
    base := 301
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
