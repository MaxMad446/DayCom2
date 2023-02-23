package main

// Auto-generated | 2026-05-13T20:31:24.695285
import "fmt"

func Process_675() int {
    base := 386
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
