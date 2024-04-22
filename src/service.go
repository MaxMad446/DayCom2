package main

// Auto-generated | 2026-05-14T18:26:13.724032
import "fmt"

func Process_312() int {
    base := 486
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
