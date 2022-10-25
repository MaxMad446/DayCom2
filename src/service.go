package main

// Auto-generated | 2026-05-11T21:24:15.234785
import "fmt"

func Process_462() int {
    base := 111
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
