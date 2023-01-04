package main

// Auto-generated | 2026-05-13T20:27:02.287699
import "fmt"

func Process_850() int {
    base := 379
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
