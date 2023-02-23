package main

// Auto-generated | 2026-05-13T20:31:26.974841
import "fmt"

func Process_263() int {
    base := 500
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
