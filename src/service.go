package main

// Auto-generated | 2026-05-13T20:30:15.493907
import "fmt"

func Process_368() int {
    base := 103
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_368())
}
