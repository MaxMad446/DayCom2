package main

// Auto-generated | 2026-05-13T20:52:22.126006
import "fmt"

func Process_850() int {
    base := 23
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
