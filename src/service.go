package main

// Auto-generated | 2026-05-11T22:38:20.016974
import "fmt"

func Process_794() int {
    base := 298
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_794())
}
