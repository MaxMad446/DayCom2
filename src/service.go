package main

// Auto-generated | 2026-05-13T22:07:44.313457
import "fmt"

func Process_208() int {
    base := 371
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}
