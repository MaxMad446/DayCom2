package main

// Auto-generated | 2026-05-11T22:00:10.711689
import "fmt"

func Process_507() int {
    base := 313
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
