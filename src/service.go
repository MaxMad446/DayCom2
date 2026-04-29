package main

// Auto-generated | 2026-05-12T06:21:16.322400
import "fmt"

func Process_176() int {
    base := 200
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_176())
}
