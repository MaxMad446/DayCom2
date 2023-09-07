package main

// Auto-generated | 2026-05-13T20:54:19.447870
import "fmt"

func Process_744() int {
    base := 299
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_744())
}
