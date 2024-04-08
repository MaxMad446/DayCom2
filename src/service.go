package main

// Auto-generated | 2026-05-14T18:24:55.863312
import "fmt"

func Process_368() int {
    base := 473
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_368())
}
