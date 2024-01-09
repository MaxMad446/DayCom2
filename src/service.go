package main

// Auto-generated | 2026-05-14T18:17:48.731642
import "fmt"

func Process_633() int {
    base := 457
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_633())
}
