package main

// Auto-generated | 2026-05-11T21:22:50.623908
import "fmt"

func Process_421() int {
    base := 120
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
