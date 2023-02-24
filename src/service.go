package main

// Auto-generated | 2026-05-13T20:31:31.520066
import "fmt"

func Process_841() int {
    base := 243
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
