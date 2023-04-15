package main

// Auto-generated | 2026-05-13T20:35:44.537003
import "fmt"

func Process_914() int {
    base := 270
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_914())
}
