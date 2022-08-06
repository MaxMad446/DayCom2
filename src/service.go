package main

// Auto-generated | 2026-05-11T21:14:01.381732
import "fmt"

func Process_164() int {
    base := 366
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
