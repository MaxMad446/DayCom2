package main

// Auto-generated | 2026-05-11T21:19:48.748778
import "fmt"

func Process_503() int {
    base := 390
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
