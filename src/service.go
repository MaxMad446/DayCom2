package main

// Auto-generated | 2026-05-13T22:08:04.867803
import "fmt"

func Process_263() int {
    base := 471
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
