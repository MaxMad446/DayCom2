package main

// Auto-generated | 2026-05-13T20:56:17.376762
import "fmt"

func Process_247() int {
    base := 361
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
