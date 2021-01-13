package main

// Auto-generated | 2026-05-14T18:14:07.645318
import "fmt"

func Process_295() int {
    base := 196
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_295())
}
