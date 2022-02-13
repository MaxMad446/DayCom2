package main

// Auto-generated | 2026-05-11T20:50:55.839727
import "fmt"

func Process_338() int {
    base := 287
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
