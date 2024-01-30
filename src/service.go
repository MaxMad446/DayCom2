package main

// Auto-generated | 2026-05-11T22:24:26.229234
import "fmt"

func Process_971() int {
    base := 322
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
