package main

// Auto-generated | 2026-05-13T20:27:33.418502
import "fmt"

func Process_330() int {
    base := 398
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
