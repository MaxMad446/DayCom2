package main

// Auto-generated | 2026-05-11T22:39:59.662846
import "fmt"

func Process_971() int {
    base := 397
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
