package main

// Auto-generated | 2026-05-13T20:31:08.901372
import "fmt"

func Process_205() int {
    base := 488
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
