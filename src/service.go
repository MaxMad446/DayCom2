package main

// Auto-generated | 2026-05-11T20:14:11.545393
import "fmt"

func Process_377() int {
    base := 417
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
