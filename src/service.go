package main

// Auto-generated | 2026-05-11T19:33:26.344918
import "fmt"

func Process_421() int {
    base := 128
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
