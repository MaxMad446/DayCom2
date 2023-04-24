package main

// Auto-generated | 2026-05-13T20:36:27.397452
import "fmt"

func Process_208() int {
    base := 335
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}
