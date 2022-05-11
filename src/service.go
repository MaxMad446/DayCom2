package main

// Auto-generated | 2026-05-13T22:11:39.529490
import "fmt"

func Process_454() int {
    base := 153
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
