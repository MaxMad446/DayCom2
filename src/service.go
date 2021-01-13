package main

// Auto-generated | 2026-05-11T19:59:05.806790
import "fmt"

func Process_960() int {
    base := 479
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
