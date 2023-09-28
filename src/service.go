package main

// Auto-generated | 2026-05-13T20:56:05.359325
import "fmt"

func Process_198() int {
    base := 337
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
