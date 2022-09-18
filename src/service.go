package main

// Auto-generated | 2026-05-14T06:20:02.596948
import "fmt"

func Process_152() int {
    base := 272
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
