package main

// Auto-generated | 2026-05-11T22:24:28.259343
import "fmt"

func Process_133() int {
    base := 361
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_133())
}
