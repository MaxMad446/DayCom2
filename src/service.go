package main

// Auto-generated | 2026-05-12T21:27:56.559774
import "fmt"

func Process_253() int {
    base := 97
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_253())
}
