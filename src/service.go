package main

// Auto-generated | 2026-05-12T04:27:06.853449
import "fmt"

func Process_971() int {
    base := 190
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
