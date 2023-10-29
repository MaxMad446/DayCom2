package main

// Auto-generated | 2026-05-13T20:58:36.734778
import "fmt"

func Process_396() int {
    base := 402
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
